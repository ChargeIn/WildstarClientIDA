#include "../winhttp.h"

//----- (0000000140009D00) ----------------------------------------------------
__int64 __fastcall sub_140009D00(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD* lParam)
{
	__int64 v4; // rdi
	__int64 result; // rax
	_DWORD* v10; // rbx
	int v11; // edx
	HANDLE CurrentProcess; // rax
	DWORD v13; // edx
	void* v14; // rcx
	HANDLE v15; // rax
	int v16; // eax
	unsigned int v17; // eax
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rax
	unsigned __int64 v21; // rax
	struct timecaps_tag ptc; // [rsp+30h] [rbp-B8h] BYREF
	struct tagRECT Rect; // [rsp+38h] [rbp-B0h] BYREF
	struct tagPAINTSTRUCT Paint; // [rsp+50h] [rbp-98h] BYREF

	v4 = qword_140C65678;
	if (Msg != 2)
	{
		if (!qword_140C65678)
			return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
		v10 = (_DWORD*)qword_140C636A0;
		++* (_DWORD*)qword_140C636A0;
		v11 = *(_DWORD*)(v4 + 64);
		if ((v11 & 1) == 0)
			goto LABEL_16;
		if (Msg > 0x112)
		{
			switch (Msg)
			{
			case 0x201u:
			case 0x204u:
			case 0x207u:
				SetCapture(hWnd);
				goto LABEL_16;
			case 0x202u:
			case 0x205u:
			case 0x208u:
				if ((wParam & 0x13) == 0)
					ReleaseCapture();
				goto LABEL_16;
			case 0x218u:
				if (wParam)
					goto LABEL_16;
				result = 1112363332i64;
				break;
			case 0x231u:
				if (*(_DWORD*)(v4 + 72) == 2)
					*(_DWORD*)(v4 + 64) = v11 | 0x200;
				goto LABEL_16;
			case 0x232u:
				if (*(_DWORD*)(v4 + 72) == 2)
					*(_DWORD*)(v4 + 64) = v11 & 0xFFFFFD3F | 0xC0;
				goto LABEL_16;
			default:
				goto LABEL_16;
			}
			goto LABEL_17;
		}
		if (Msg != 274)
		{
			switch (Msg)
			{
			case 3u:
				if (*(_DWORD*)(v4 + 72) == 2 && (v11 & 0x200) == 0 && (v11 & 0x20) == 0)
					*(_DWORD*)(v4 + 64) = v11 | 0x40;
				goto LABEL_16;
			case 5u:
				if (*(_DWORD*)(v4 + 72) == 2 && (wParam & 0xFFFFFFFFFFFFFFFDui64) == 0)
				{
					if ((v11 & 0x200) == 0 && (v11 & 0x20) == 0)
						*(_DWORD*)(v4 + 64) = v11 | 0x40;
					if (WORD1(lParam))
						*(float*)(v4 + 248) = (float)(unsigned __int16)lParam / (float)WORD1(lParam);
				}
				goto LABEL_16;
			case 7u:
				if (*(_DWORD*)(v4 + 72) == 4 && (v11 & 0x20) == 0)
				{
					SetForegroundWindow(*(HWND*)(v4 + 8));
					GetWindowRect(*(HWND*)(v4 + 8), &Rect);
					ClipCursor(&Rect);
					SetThreadExecutionState(0x80000003);
				}
				goto LABEL_16;
			case 8u:
				if (*(_DWORD*)(v4 + 72) == 4 && (v11 & 0x20) == 0)
				{
					ClipCursor(0i64);
					ShowWindow(*(HWND*)(v4 + 8), 7);
					SetThreadExecutionState(0x80000001);
				}
				goto LABEL_16;
			case 0xFu:
				if (!GetUpdateRect(hWnd, 0i64, 0))
					goto LABEL_79;
				BeginPaint(hWnd, &Paint);
				v16 = *(_DWORD*)(v4 + 64);
				if ((v16 & 4) != 0 && (v16 & 0x200) != 0 && (v16 & 0x10) == 0 && (v16 & 0x20) == 0)
					sub_1400094F0(v4);
				EndPaint(hWnd, &Paint);
				result = 0i64;
				goto LABEL_17;
			case 0x14u:
				goto LABEL_63;
			case 0x1Cu:
				if (wParam)
				{
					*(_DWORD*)(v4 + 64) = v11 | 0x2000;
					if (!timeGetDevCaps(&ptc, 8u))
						timeBeginPeriod(ptc.wPeriodMin);
					CurrentProcess = GetCurrentProcess();
					v13 = 0x8000;
					v14 = CurrentProcess;
				}
				else
				{
					*(_DWORD*)(v4 + 64) = v11 & 0xFFFFDFFF;
					if (!timeGetDevCaps(&ptc, 8u))
						timeEndPeriod(ptc.wPeriodMin);
					v15 = GetCurrentProcess();
					v13 = 32;
					v14 = v15;
				}
				SetPriorityClass(v14, v13);
				goto LABEL_16;
			case 0x20u:
				if ((v11 & 4) == 0)
					goto LABEL_16;
				if (hWnd == GetCapture()
					|| (GetCursorPos((LPPOINT)&ptc),
						ScreenToClient(hWnd, (LPPOINT)&ptc),
						GetClientRect(hWnd, &Rect),
						(int)ptc.wPeriodMin >= Rect.left)
					&& (int)ptc.wPeriodMin < Rect.right
					&& (int)ptc.wPeriodMax >= Rect.top
					&& (int)ptc.wPeriodMax < Rect.bottom)
				{
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 480i64))(
						qword_140C65670,
						(unsigned int)((int)(*(_DWORD*)(v4 + 64) << 21) >> 31));
					if ((*(_DWORD*)(v4 + 64) & 0x800) == 0)
					{
						ShowCursor(0);
						*(_DWORD*)(v4 + 64) |= 0x800u;
					}
					result = 1i64;
				}
				else
				{
					if ((*(_DWORD*)(v4 + 64) & 0x800) != 0)
					{
						ShowCursor(1);
						*(_DWORD*)(v4 + 64) &= ~0x800u;
					}
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 480i64))(qword_140C65670, 0i64);
					result = DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
				}
				goto LABEL_17;
			case 0x24u:
				if (*(_DWORD*)(v4 + 72) != 2)
					goto LABEL_16;
				if (lParam[6] < 0x280u)
					lParam[6] = 640;
				if (lParam[7] >= 0x1E0u)
					goto LABEL_79;
				lParam[7] = 480;
				result = 0i64;
				break;
			case 0x7Cu:
				if (wParam == -16i64)
				{
					lParam[1] &= 0x7F30FFFFu;
					v17 = 0x80000000;
					if (*(_DWORD*)(v4 + 72) == 2)
						v17 = 13565952;
					lParam[1] |= v17;
				}
				goto LABEL_16;
			case 0x84u:
				if (*(_DWORD*)(v4 + 72) == 2)
					goto LABEL_16;
			LABEL_63:
				result = 1i64;
				break;
			default:
				goto LABEL_16;
			}
			goto LABEL_17;
		}
		v18 = (unsigned __int16)wParam & 0xFFF0;
		if (v18 > 0xF100)
		{
			v21 = v18 - 61760;
			if (v21 && v21 != 48 || *(_DWORD*)(v4 + 72) == 2 || (v11 & 0x2000) == 0)
				goto LABEL_16;
		}
		else if (v18 != 61696)
		{
			v19 = v18 - 61440;
			if ((!v19 || (v20 = v19 - 16) == 0 || v20 == 32) && *(_DWORD*)(v4 + 72) != 2)
			{
				result = 0i64;
				goto LABEL_17;
			}
		LABEL_16:
			result = (*(__int64(__fastcall**)(__int64, HWND, _QWORD, WPARAM, _DWORD*))(*(_QWORD*)v4 + 104i64))(
				v4,
				hWnd,
				Msg,
				wParam,
				lParam);
		LABEL_17:
			--* v10;
			return result;
		}
	LABEL_79:
		result = 0i64;
		goto LABEL_17;
	}
	PostQuitMessage(0);
	if (v4)
		*(_QWORD*)(v4 + 8) = 0i64;
	return 0i64;
}
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65678: using guessed type __int64 qword_140C65678;

