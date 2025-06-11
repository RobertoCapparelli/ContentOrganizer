# Content Organizer

A plugin for **Unreal Engine** that streamlines asset organization within your project using a graph-based interface. Define filter and destination rules with “Folder” and “Filter” nodes, then automatically apply them to move, rename (including adding configurable prefixes), handle naming conflicts for assets sharing the same name, and clean up redirectors.

## Table of Contents

- Key Features  
- Demo Video  
- Installation  
- Usage  
- Work in Progress  
- Contributing  

## Key Features

- **Graph-Based Workflow**: Build a visual graph where each node represents either a destination folder or a filter (by asset class and name pattern).  
- **Recursive Scanning**: Automatically scan all assets under a configurable root path (default: `/Game`).  
- **Safe Relocation**: Rename and move assets according to your rules, skipping any already correctly organized.  
- **Redirector Cleanup**: At the end of the process, fix and remove orphaned redirectors.  
- **Editor UI**: Custom editor panel with drag-and-drop support, parameter details, and full undo/redo.  

## Demo Video

Watch an overview and walkthrough video here:  
https://youtu.be/KGWb_DrLgog?si=c92hUW75E8aeuCSH  

## Installation

1. Copy the `ContentOrganizer` folder into `YourProject/Plugins/`.  
2. Open your project in Unreal Engine and enable the **Content Organizer** plugin in the Plugins settings.  
3. From the main menu, go to **Window → Content Organizer** to open the panel and start building your rule graph.  

## Usage

1. Add a **Folder** node for each target directory.  
2. Add a **Filter** node and set the asset class and name pattern.  
3. Connect filters to folders using the “In”/“Out” pins.  
4. Click **Organize Content** to apply your rules.  

## Work in Progress

This plugin is under active development. Planned features include:

- Selecting asset types directly within each **Filter** node (blueprints, textures, materials, etc.)  
- Tagging and metadata for routing assets into specific folders  
- Progress reporting and completion notifications within the editor UI  

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any bugs, enhancements, or feature requests. All commits will be reviewed; thank you for helping improve Content Organizer.  

