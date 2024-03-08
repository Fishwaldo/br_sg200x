# Buildroot overlay for SG200x based Boards

## Usage

```
mkdir br_sg200x && cd br_sg200x
git clone --depth 1 --branch 2023.11.2 https://github.com/buildroot/buildroot
git clone https://github.com/Fishwaldo/sg200x 
export BR_LICHEERVNANO_OVERLAY_PATH=$(pwd)/sg200x
cd buildroot
make BR2_EXTERNAL=$BR_LICHEERVNANO_OVERLAY_PATH sipeed_licheervnano_defconfig
make cvitekconfig
make
```

## Prebuilt images

Prebuilt images are available on the releases page (for tested images) or development images are available via the github actions page

