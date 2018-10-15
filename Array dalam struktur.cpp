//#include <iostream>
//#include <stdlib.h>
//#include <conio.h>
//#define N_MOVIES 5
//
//using namespace std;
//
//struct movies_t{
//	char title[50];
//	int year;
//}films [N_MOVIES];
//
//void printmovie (movies_t movie);
//
//int main(){
//	char buffer[50];
//	int n;
//	for(n=0; n<N_MOVIES; n++){
//		cout<<"Masukkan judul film: ";
//		cin.getline (films[n].title, 50);
//		cout<<"Masukan tahun : ";
//		cin.getline(buffer, 50);
//		films[n].year= atoi (buffer);
//	}
//	cout<<"\nFilm yang menjadi favorit kamu:\n";
//	for(n=0;n<N_MOVIES;n++)
//		printmovie(films[n]);
//	getch();
//}
//
//void printmovie (movies_t movie){
//	cout<<movie.title;
//	cout<<"("<<movie.year<<")\n";
//}