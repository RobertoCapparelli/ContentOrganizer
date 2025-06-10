> **Work in Progress:** This plugin is still under construction and many features remain to be implemented, such as:
> - Filtering by asset types within the **Filter** node  
> - Tagging assets to route them into specific folders  
> - Handling rename conflicts when two assets share the same name  
>
> It was created as an R&D prototype rather than a finished tool. This is my first foray into a custom graph system, and if there’s interest this project will be actively developed further. Any contributions are welcome—after review, commits will be gratefully accepted. Thank you for your interest!

# Content Organizer

A plugin for **Unreal Engine** that streamlines asset organization within your project using a graph-based interface.  
Define filter and destination rules with “Folder” and “Filter” nodes, then automatically apply them to move, rename, and clean up assets (including redirectors).

## Demo Video

Watch an overview and walkthrough video here: https://youtu.be/KGWb_DrLgog?si=c92hUW75E8aeuCSH

## Key Features

- **Graph-Based Workflow**: Build a visual graph where each node represents either a destination folder or a filter (by asset class and name pattern).  
- **Recursive Scanning**: Automatically scan all assets under a configurable root path (default: `/Game`).  
- **Safe Relocation**: Rename and move assets according to your rules, skipping any already correctly organized.  
- **Redirector Cleanup**: At the end of the process, fix and remove orphaned redirectors.  
- **Editor UI**: Custom editor panel with drag-and-drop support, parameter details, and full undo/redo.

## Installation

1. Copy the `ContentOrganizer` folder into `YourProject/Plugins/`.  
2. Open your project in Unreal Engine and enable the **Content Organizer** plugin in the Plugins settings.  
3. From the main menu, go to **Window → Content Organizer** to open the panel and start building your rule graph.

## Usage

1. Add a **Folder** node for each target directory.  
2. Add a **Filter** node and set the asset class and name pattern.  
3. Connect filters to folders using the “In”/“Out” pins.  
4. Click **Organize Content** to apply your rules.

---

**Content Organizer** helps keep your Content Browser tidy and consistent—perfect for large-scale projects with hundreds or thousands of assets.  
