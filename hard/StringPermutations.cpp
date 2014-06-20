#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<string>

using namespace std;

vector<string> vArray;
vector<string> vAuxArray;


int charAt(string *ptr, int index){
  cout<<"BP in charAt"<<endl;
  if(index>=(*ptr).size()) return 0;
  else return (int)(*ptr)[index];
}


void permute(std::string line, uint k){
  if(k==line.size()) {
    vArray.push_back(line);
    // cout<<line;
    return;
  }

  for(uint i=k;i<line.size();i++){
    /*perform swapping*/
    swap(line[k], line[i]);
    permute(line,k+1);
    swap(line[k], line[i]);
  }
}



int main(int argc, char **argv){
   ifstream my_file(argv[1]);
   string line;
   int vMaxLength=0;
   /*check if the file is open or not*/
   if(my_file.is_open()){
      while(getline(my_file,line)){
      // cout<<line<<endl;
      permute(line,0);
      /*
      cout<<"======================================"<<endl;
      for(int i=0;i<vArray.size();i++) cout<<vArray[i]<<endl;
      cout<<"======================================"<<endl;*/
      vMaxLength=line.size();
      vAuxArray.resize(vArray.size());

      // perform LSD sorting of the array
    /*Start LSD sorting*/
      for(int k=vMaxLength-1;k>=0;k--){
	//for (int k = vMaxLength-1; k >= 0; k--)
	//      { 	

	int count[257]={0};//assuming ascii
	//fill count array
	for (int i = 0; i < vArray.size(); i++)
	  {
	    count[vArray[i][k]+1]++;//--> subtility1
	  }


	// cummulative count
	for (int i = 1; i < 257; ++i)
	  {
	    count[i]+=count[i-1];
	  }

	// spread the strings into the auxillary array
	for (int i = 0; i < vArray.size();i++)
	  {
	    vAuxArray[count[vArray[i][k]]]=vArray[i];
	    count[vArray[i][k]]+=1;
	  }

	//      cout<<"bp"<<endl;
	// copy the elements back into array from aux array
	for (int i = 0; i < vArray.size(); i++)
	  {
	    vArray[i]=vAuxArray[i];
	  }
      }


      for(int i=0;i<vArray.size();i++){
	if(i==0) cout<<vArray[i];
	else cout<<","<<vArray[i];
      }
      cout<<endl;
      vArray.clear();
      vAuxArray.clear();
      }
   }
   else {
      cout<<"Unable to open the file";
    }
  return 0;
}
