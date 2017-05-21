                                        RANGKUMAN BINARY SEARCH

          Binary search adalah metode pencarian suatu data atau atau elemen di dalam suatu array dengan kondisidata dalam keadaan terurut.Proses pencarian binary
search hanya dapat dilakukan pada sekumpulan data yang sudah diurutkan terlebih dahulu.Prinsip dari binary search terhadap N elemen dapat di jelaskan seperti
berikut:
1.tentukan posisi awal = 0 dan posisi akhir = N-1
2.hitung posisi tengah = (posisi awal + posisi akhir)/2
3.bandingkan data yang di cari dengan elemen posisi tengah.
  -jika sama maka catat posisi dan cetak kemudian berhenti
  -jika lebih besar maka akan dilakukan pencarian kembalikebagian kanan daengan posisi awal=
   posisi tengah +1 dan posisi akhir tetap kemudian ulangi mulai poin 2
  -jika lebih kecil maka akn dilakukan pencarian kembali ke bagian kiri dengan nilai posisi awal
   tetap dan nilai posisi akhir = posisi tengah -1kemudian ulangi mulai poin 2
     misalkan kita mempunyai sederetand data dalam array sebanyak 10 elemen dan akan dilakukan pencarian data 87terhadap array.
Nilai[0..9]= 12,45,23,87,90,55,15,25,40,21
urutkan elemen array secara menaik,sehinggga diperoleh;
nilai[0..9] = 12,15,21,23,25,40,45,55,87,90
data yang akan di cari =87(bilangan)
Tentukan nilai awal =0,akhir =N-1=9 hitung tengah = (9+0)/2=4
bandingkan bilangan <nilai[tengah]->87>25->false
bandingkan bilangan <nilai[tengah]->87>25->false
bandingkan bilangan <nilai[tengah]->87>25->true maka pencacrian dilakukan ke ssebelah kanan dengan nilai awal = tengah +1=5
karena awal masih lebih kecil dibandingkan dengan akhir maka ulangi kembali dengan mulai menghitung tengah 
hitung tengah = (9+5)/2=7
bandingkan bilangan <nilai[tengah]->87>55->false
bandingkan bilangan <nilai[tengah]->87>55->false
bandingkan bilangan <nilai[tengah]->87>55->true maka pencacriandilakukan ke sebelah kanan dengana nilai awal = tengah+1=8
karena awal masih lebih kecil daripada akhir maka ulangi kembali mulai menghitung tengah 
hitung tengah=(9+8)/2=8
bandingkan bilangan <nilai[tengah]->87=87->true 
karen sudah di tentukan hasil nya maka proses pencarian berhenti.
brikut adalah sebuah contoh yang di implementasikan ke dalam koding;

