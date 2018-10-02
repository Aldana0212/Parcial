# Parcial#include <iostream>
using namespace std;


int main(int argc, char **argv)

{
int filas=3, columnas=3, mayor1=0, mayor2=0;
	 int matriz1[filas][columnas];
	 int matriz2[filas][columnas];
	 
	 
	for(int i=0; i<filas; i++)
	{
	
		for (int j=0; j<columnas; j++)
		{
		
			cout<<"Introducir datos: ";
			cin>>Matriz1[i][j];
			
			}
	}
	
	 
	for(int i=0; i<filas; i++)
	{
	
		for (int j=0; j<columnas; j++)
		{
		
			cout<<"Introducir datos: ";
			cin>>Matriz2[i][j];
			
			}
	}
	
	
	for(int i=0; i<filas; i++)
	{
		
		for(int j=0; j<columnas; j++)
		{
			for(int x=0; x<filas; x++)
			{
				for(int y=0; y<columnas; y++)
				{
					if(matriz1[i][j]<matriz1[x][y])
					{
					
					mayor1=matriz1[i][j]
					matriz1[i][j]=matriz1[x][y]
					matriz1[x][y]=mayor1
					
					}
				
				}
				
			}
			
		}
		
	}
	
	for(int i=0; i<filas; i++)
	{
		
		for(int j=0; j<columnas; j++)
		{
			for(int x=0; x<filas; x++)
			{
				for(int y=0; y<columnas; y++)
				{
					if(matriz1[i][j]<matriz2[x][y])
					{
					
					mayor2=matriz2[i][j]
					matriz2[i][j]=matriz2[x][y]
					matriz2[x][y]=mayor2
					
					}
				
				}
				
			}
			
		}
		
	}
	

cout<<"\nLos datos de la matriz1 fueron ordenados de menor a mayor"<<end1;

for(int i=0; i<filas; i++)
{
	
	for(int j=0; j<columnas; j++)
	{
		
		cout<<matriz1[i][j]<<" ";
		}
		cout<<end1;
	
	}
	
	
	cout<<"\nLos datos de la matriz2 fueron ordenados de menor a mayor"<<end1;

for(int i=0; i<filas; i++)
{
	
	for(int j=0; j<columnas; j++)
	{
		
		cout<<matriz2[i][j]<<" ";
		}
		cout<<end1;
	
	}
	
	
	
	
	return 0;
}
