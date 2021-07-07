# Maintainer: Sai Vishnu saivishnu725@gmail.com
pkgname='unzip_all'
pkgver=1
pkgrel=1
pkgdesc="A tool to unzip all the .zip files in the current working directory. "
arch=('x86_64')
url="https://github.com/saivishnu725/unzip_all"
license=('GPL')
depends=('unzip' 'bash' 'bzip2')
makedepends=('gcc' 'git')
#source=('https://github.com/saivishnu725/unzip_all.git')
source=('https://github.com/saivishnu725/unzip_all/archive/refs/heads/master.zip')
#noextract=()
md5sums=('SKIP')

prepare()
{
    mv ${srcdir}/${pkgname}-master ${srcdir}/${pkgname}
}

build() {
	cd "$pkgname"
    gcc unzip_all.c -o unzip_all 
}

package() {
	cd "$pkgname"
    install -Dm755 ./unzip_all "$pkgdir/usr/bin/unzip_all"
}
