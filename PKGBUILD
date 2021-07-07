# Maintainer: Sai Vishnu saivishnu725@gmail.com
pkgname='unzip_all'
pkgver=1
pkgrel=1
pkgdesc="A tool to unzip all the .zip files in the current working directory. "
arch=('x86_64')
url="https://github.com/saivishnu725/unzip_all"
license=('GPL')
depends=('unzip' 'git' 'bash' 'bzip2')
makedepends=('gcc')
source=('unzip_all::git://github.com/saivishnu725/unzip_all.git')
noextract=()
md5sums=()
validpgpkeys=()

prepare() {
	cd "$pkgname-$pkgver"
	patch -p1 -i "$srcdir/$pkgname-$pkgver.patch"
}

build() {
	cd "$pkgname-$pkgver"
	./configure --prefix=/usr
	make
}

check() {
	cd "$pkgname-$pkgver"
	make -k check
}

package() {
	cd "$pkgname-$pkgver"
	make DESTDIR="$pkgdir/" install
}
