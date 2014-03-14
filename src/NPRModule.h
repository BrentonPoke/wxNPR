#ifndef __NPRModule__
#define __NPRModule__

/**
@file
Subclass of NPR_Frame, which is generated by wxFormBuilder.
*/

#include "NPRFrame.h"
#include "LogWindow.h"
//// end generated include

/** Implementing NPR_Frame */
class NPR_Module : public NPR_Frame
{
	protected:
		// Handlers for NPR_Frame events.
		void OnTextEnter( wxCommandEvent& event );
		void Connect_OnButtonClick( wxCommandEvent& event );
		void Exit_OnButtonClick( wxCommandEvent& event );

	public:
		/** Constructor */
		NPR_Module( wxWindow* parent );
	//// end generated class members

};

#endif // __NPR_Module__