#include "../winhttp.h"

//----- (000000014003E1E0) ----------------------------------------------------
LRESULT __fastcall sub_14003E1E0(__int64 a1, HWND a2, __int64 a3, WPARAM a4, LPARAM lParam)
{
	UINT v7; // edi
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // r9
	__int64 v12; // rax
	int v14; // [rsp+20h] [rbp-18h]

	v7 = a3;
	sub_140047FC0(a1, a3, a3, lParam);
	if (*(_DWORD*)(a1 + 144) && *(_DWORD*)(a1 + 40) != 4)
	{
		v12 = *(_QWORD*)(a1 + 32);
		if (v12)
		{
			while (*(_DWORD*)(v12 + 40) == 4)
			{
				v12 = *(_QWORD*)(v12 + 32);
				if (!v12)
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			if (*(_QWORD*)(a1 + 24))
			{
				v14 = lParam;
				if (!(*(__int64(__fastcall**)(_QWORD, HWND, __int64, WPARAM))(**(_QWORD**)(a1 + 72) + 56i64))(
					*(_QWORD*)(a1 + 72),
					a2,
					v10,
					a4)
					&& !*(_BYTE*)(*(_QWORD*)(a1 + 72) + 3360i64))
				{
					return 0i64;
				}
			}
		}
	}
	sub_14004D2B0(*(_QWORD*)(a1 + 96), v9, v7, v11, v14, *(_QWORD*)(a1 + 72));
	return DefWindowProcW(a2, v7, a4, lParam);
}
// 14003E258: variable 'v10' is possibly undefined
// 14003E281: variable 'v9' is possibly undefined
// 14003E281: variable 'v11' is possibly undefined
// 14003E281: variable 'v14' is possibly undefined

