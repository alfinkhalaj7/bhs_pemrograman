1. Definisi
Array (dalam python) adalah struktur yang dapat menyimpan dan mengatur kumpulan data. Struktur data berbicara tentang cara menyimpan, mengatur, mengelompokkan, dan merepresentasikan data. Struktur data sangatlah penting dan harus dikuasai oleh seorang programmer. Di forum pemrograman, saya sering menjumpai pertanyaan-pertanyaan yang menurut saya bisa diselesaikan jika orang tersebut memahami konsep struktur data.
Pada materi kali ini kita akan membahas tentang struktur data lanjutan yaitu himpunan dan kamus.
2. Tetapkan
Himpunan dalam bahasa pemrograman python adalah tipe data kolektif yang digunakan untuk menyimpan banyak nilai dalam satu variabel dengan berikut ini
kondisi:niversitas
- nilai anggota yang disimpan harus unik (bukan duplikat)
= Nilai member yang sudah dimasukkan tidak dapat diubah per yang sudah dimasukkan
lagi
set is unordered alias tidak berurutan yang artinya tidak bisa diakses berdasarkan indeks.
Untuk lebih memahami 3 poin di atas, langsung saja kita lakukan praktiknya.
Bentuk umum Himpunan:
### gunakan kurung kurawal
student_set = { 'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)
### ubah daftar menjadi kumpulan
buah_set = set(['mangga', 'Apel']) cetak(set_buah)
### set dengan tipe data berbeda
set_mix = { 'manusia', 'hewan', 5, Benar, ('A', 'B')
Keluaran:
{'Wahid', 'Lendis', 'Basith', 'Huda'}
'apel', 'mangga')
(Benar, 5, ('A', 'B'), 'hewan', 'manusia'}
A. Tidak Terurut (Set)
Tipe kumpulan data tidak berurutan. Artinya, kita tidak bisa menggunakan index
untuk mengakses nilai-nilai
kesalahan:
set_saya = {'a'} cetak(set_saya[0])
Pesan eror:
di set. Kalaupun kita memaksa, kita hanya akan mendapat
Traceback (panggilan terakhir terakhir):
File "<stdin>", baris 1, di <module> TypeError: objek 'set' dapat disubskripkan
Kita juga bisa melihat hal
Kita juga bisa melihat kode program yang telah kita buat tadi:
student_set = { 'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)
Keluaran:
{'Wahid', 'Lendis', 'Basith', 'Huda'}
Dimana diatas kita definisikan 4 anggota himpunan secara berurutan: Huda, Lendis, Wahid, dan Basith. Namun setelah kami cetak, kami mendapat pesanan yang berbeda.
B. Tidak dapat diubah (Set)
Himpunan tidak dapat diubah, artinya nilai yang telah kita masukkan ke dalam himpunan tidak dapat diubah lagi.
Namun, kami masih dapat menambah dan menghapus anggota ke kumpulan tersebut. Dan, karena kumpulan tidak dapat diubah, kumpulan hanya dapat menerima anggota tipe data yang juga tidak dapat diubah.
Perhatikan contoh berikut:
### anggota kumpulan harus bertipe data yang tidak dapat diubah
set_fruit = { 'mangga', 'lemon', 'alpukat', Benar, 1, 2, 3 }
### kita dapat menjadikan Tuple sebagai anggota
### karena keyboard ini tidak dapat diubah_= {
(1, 2, 3), (4, 5, 6),
(7, 8, 9),
Namun kami tidak dapat menyertakan list sebagai anggota karena list dapat diubah. Perhatikan contoh berikut:
x = himpunan{ 35, 100, ['a', 'b'] }
Pesan eror:
Unaul
Traceback (panggilan terakhir terakhir): File "<stdin>", baris 1, di <module> TypeError: unhashable type: 'list'
C. Tidak ada Nilai duplikat
(Mengatur)
Juga diatur dalam python tidak dapat menerima nilai duplikat. Jika kita memasukkan suatu nilai yang sudah ada pada suatu himpunan, maka nilai tersebut hanya akan muncul atau dimasukkan satu kali saja. Perhatikan contoh berikut:
kata_unik = {
'pagi', 'ini', 'adalah', 'pagi', 'yang mana',
'sangat terang'}
cetak(kata_unik)
Maka kata “pagi” hanya akan dimasukkan satu kali:
{'itu', 'sangat', 'ini', 'pagi', 'cerah', 'adalah')
D. Tambahkan/Perbarui Elemen Set
Seperti yang telah kami sebutkan di atas bahwa meskipun nilai yang ditetapkan tidak dapat diubah, namun tetap dapat ditambah dan dihapus. Kita dapat menambahkan anggota baru ke set dengan fungsi add() dan update(). Perhatikan contoh berikut:
alfabet_set = {'a', 'b', 'c'} print(kumpulan alfabet)
### tambahkan satu per satu set_abjad.add('d') set_abjad.add('e')
#### akan error jika nilai 100 tidak ada di set
set.hapus(100)
mencetak (mengatur)
# tidak akan error jika ('a', 'b') tidak ada dalam set set.discard (('a', 'b')) print(set)
# hapus nilai di sebelah kiri Hapusnilai = set.pop()
print('Nilai yang dihapus =', nilaiDihapus) print(set)
# hapus semua nilai set.clear() print(set)
Keluaran: Universitas
(Salah, Benar, 100, 'maya', 'budi', ('a', 'b')}
(Salah, Benar, 'maya', 'budi', ('a', 'b'))
(Salah, Benar, 'maya', 'budi'}
nilaiYangDihapus = Salah (Benar, 'maya', 'budi'}
mengatur()
ngul
menambahkan()
F. Fungsi (Set)
Berikut ringkasan fungsi bawaan tipe data set yang bisa kita gunakan:
Fungsi
jernih()
Kegunaan
Menambahkan satu anggota ke set
Menghapus seluruh rangkaian menambahkan lebih dari satu anggota sekaligus set_abjad.update({ 'f', 'g' }) # juga dapat menggunakan daftar set_abjad.update(['h', 'i'])
cetak (kumpulan abjad)
Keluaran : Sa unaqur
('a', 'c', 'b'} ('d', '', 'e',
'b', 'g', 'h', 'f', 'c'}
Contoh:
e. Hapus/hapus Elemen Set
Untuk menghapus anggota dari suatu himpunan, ada 4 fungsi yang dapat kita gunakan:
- hapus(nilai) Untuk menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka akan terjadi error.
- membuang(nilai) Untuk menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka tidak akan terjadi error.
- pop() Mengambil dan menghapus nilai di sebelah kiri. .clear() Menghapus semua anggota.
set = {'virtual', 'berbudi luhur', 100, ('a', 'b'), false, True} print (set)
menyalin()
perbedaan()
perbedaan_pembaruan()
Buat salinan satu set menjadi set baru
Melakukan operasi perbedaan antara dua set
Hapus anggota kumpulan lain yang ada di kumpulan saat ini
membuang()
Menghapus satu anggota dari kumpulan
persimpangan()
persimpangan_perbarui()
Melakukan operasi irisan antara dua set
Memperbarui anggota yang merupakan potongan dari dua set
isdisjoint()
Mengembalikan nilai Benar jika dua set tidak memiliki irisan
issusbset()
Mengembalikan nilai Benar jika himpunan lain memiliki anggota dari himpunan saat ini
issuperset()
Mengembalikan nilai Benar jika himpunan saat ini memiliki anggota dari himpunan lain
pop()
Menghapus dan mengembalikan nilai yang dihapus dari kumpulan
menghapus()
Menghapus nilai dari suatu set
perbedaan simetris()
perbedaan simetris_update()
Persatuan()
Lakukan operasi komplemen antara dua set
Memperbarui kumpulan hasil pelengkap
Melakukan operasi gabungan dua set atau lebih
memperbarui()
Memperbarui set dengan menambahkan nilai tertentu
