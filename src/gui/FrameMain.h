// -*- C++ -*-
//
// generated by wxGlade 1.0.1 on Mon May  1 14:07:07 2023
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef FRAMEMAIN_H
#define FRAMEMAIN_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "app"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/notebook.h>
#include <wx/splitter.h>
// end wxGlade

// begin wxGlade: ::extracode
#include "bitmapFromMem.h"
#ifndef ICON_XPM
#define ICON_XPM
#include "res/multivnc.xpm"
#endif
#include "evtids.h"
#include "res/connect.png.h"
#include "res/listen.png.h"
#include "res/disconnect.png.h"
#include "res/fullscreen.png.h"
#include "res/screenshot.png.h"
#include "res/toggle-keyboard-grab.png.h"
#include "res/replay.png.h"
#include "res/record.png.h"
#include "res/stop.png.h"
#include "evtids.h"
// end wxGlade


class FrameMain: public wxFrame {
public:
    // begin wxGlade: FrameMain::ids
    // end wxGlade

    FrameMain(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:

protected:
    // begin wxGlade: FrameMain::attributes
    wxMenuBar* frame_main_menubar;
    wxStatusBar* frame_main_statusbar;
    wxToolBar* frame_main_toolbar;
    wxPanel* panel_top;
    wxSplitterWindow* splitwin_main;
    wxPanel* splitwin_main_pane_1;
    wxSplitterWindow* splitwin_left;
    wxPanel* splitwin_left_pane_1;
    wxListBox* list_box_services;
    wxPanel* splitwin_left_pane_2;
    wxListBox* list_box_bookmarks;
    wxPanel* splitwin_main_pane_2;
    wxNotebook* notebook_connections;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    virtual void machine_connect(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_listen(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_disconnect(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_showlog(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_preferences(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_screenshot(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_save_stats(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_input_record(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_input_replay(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_exit(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_toggletoolbar(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglediscovered(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglebookmarks(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglestatistics(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_seamless(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglefullscreen(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void bookmarks_add(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void bookmarks_edit(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void bookmarks_delete(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void windowshare_start(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void windowshare_stop(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void help_contents(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void help_issue_list(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void help_about(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_grabkeyboard(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_services_select(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_services_dclick(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_bookmarks_select(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_bookmarks_dclick(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void notebook_connections_pagechanged(wxBookCtrlEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // FRAMEMAIN_H
