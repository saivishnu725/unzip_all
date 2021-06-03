# unzip_all

CLI tool to unzip all the zip files in the current working directory.

#

## Prerequisites/ Dependencies

1.  This tool runs on any GNU/Linux distribution.
2.  You should have `ls unzip gcc` installed to run this tool.
    `ls` and `gcc` comes preinstalled in all of the GNU/Linux system I am no sure about unzip but you can easily install it using your package manager.

```bash
# Debian/ Ubuntu based distros
sudo apt install unzip
```

```bash
#  Fedora
sudo dnf install unzip
```

#

## 1a. Installation

1. Download the repo using the green button in the top or run clone it using this command

```bash
git clone https://github.com/saivishun725/unzip_all.git
```

2. Move the file using this command or if you want it some where else, just remember to check if the tool is saved in a location that is available in your PATH which can be found by using running `echo $PATH`

```bash
cd unzip_all/
mv unzip_all /usr/bin/
```

3. If you want to remove the source code then run these

```bash
cd ..
rm -rfv unzip_all
```

## 1b. Build

If you don't want to trust any publically available binary then you can build this yourself by running these commands.

1. Clone the repository from GitHub

```bash
git clone https://github.com/saivishnu725/unzip_all.git
```

2. Remove the pre-compiled binary

```bash
cd unzip_all
rm unzip_all
gcc unzip_all.c -o unzip_all
```

3. Now move the compiled tool to a location present in the path

```bash
mv unzip_all /usr/bin/
```

4. Remove the source code if you want using these commands

```bash
cd ..
rm -rfv unzip_all/
```

#

## Usage

Just `cd` into the folder and unzip all the files by just running this one command.

```bash
unzip_all
```

## License

[GNU General Public License v2.0](https://choosealicense.com/licenses/gpl-2.0/)
