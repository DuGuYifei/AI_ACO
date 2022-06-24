// SADlg.h : header file
//

#if !defined(AFX_SADLG_H__438856B2_C48B_477A_8281_7A2F42FF546D__INCLUDED_)
#define AFX_SADLG_H__438856B2_C48B_477A_8281_7A2F42FF546D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define NCITIES 50				/*number of cities - do not change!*/
#define NANTS	NCITIES			/*number of ants - do not change!*/

/////////////////////////////////////////////////////////////////////////////
// CSADlg dialog

class CSADlg : public CDialog
{
// Construction
public:
	CSADlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSADlg)
	enum { IDD = IDD_SA_DIALOG };
	CStatic	m_CityFrame;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSADlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	void Draw();
	BOOL InitializeMap();
	HICON m_hIcon;

	double	loc[NCITIES][2];			/*the map*/
	int ants[NANTS][NCITIES];			/*each row is one ant - the sequence of cities*/
	double intens[NCITIES][NCITIES];	/*pheromone intensities*/
	double visibility[NCITIES][NCITIES];/*visibility of city j from i*/ 
	double delta[NCITIES][NCITIES];		/*ant movements*/

	int		route[NCITIES];				/*current route*/
	double	distance;					/*the length of the current route*/

	double alpha;
	double beta;
	double rho;

	CDC m_memDC;
	CBitmap m_bmp;
	CFont m_font;
	CPen m_pen;
	CBrush m_brush;

	// Generated message map functions
	//{{AFX_MSG(CSADlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnStart();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	double Dst(int i, int j);			/*calculates the distance between cities i and j*/
	bool   IsCityInAnt(int city, int ant); /*checks if the ant has already visited the city*/
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SADLG_H__438856B2_C48B_477A_8281_7A2F42FF546D__INCLUDED_)
