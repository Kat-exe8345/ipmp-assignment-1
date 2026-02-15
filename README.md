
# Repository Cloning Guide

## Clone the Repository

```bash
git clone --recurse-submodules https://github.com/Kat-exe8345/ipmp-assignment-1.git ./ipmp-assignment-1-sw
cd ipmp-assignment-1-sw
```

## Initialize Submodules

```bash
git submodule update --init --recursive
```

## Setup & Run Web App

Navigate to the web app directory:

```bash
cd dev/taskflow
pnpm install
pnpm dev
```

For more details, read `dev/taskflow/README.md`

The web app will be available at `http://localhost:3000`.


## Project Structure

- `/dev/taskflow` - Project
- `/dsa` - DSA problems

