#!/bin/bash

# Define the script name
SCRIPT_NAME="tester.sh"

# Check if the script exists in the current directory
if [ ! -f "$SCRIPT_NAME" ]; then
    echo "Error: $SCRIPT_NAME not found in the current directory."
    exit 1
fi

# Create the ~/bin directory if it doesn't exist
BIN_DIR="$HOME/bin"
mkdir -p "$BIN_DIR"

# Move the script to ~/bin
mv "$SCRIPT_NAME" "$BIN_DIR/"

# Update the PATH in the shell configuration file
CONFIG_FILE="$HOME/.bashrc"  # Adjust this for your shell (e.g., ~/.zshrc)
echo "export PATH=\"\$HOME/bin:\$PATH\"" >> "$CONFIG_FILE"

# Source the shell configuration file to apply changes
source "$CONFIG_FILE"

# Make the script executable
chmod +x "$BIN_DIR/$SCRIPT_NAME"

echo "Script $SCRIPT_NAME has been moved to ~/bin and is now accessible from anywhere."
