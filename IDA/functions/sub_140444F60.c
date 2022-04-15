#include "../winhttp.h"

//----- (0000000140444F60) ----------------------------------------------------
__int64 __fastcall sub_140444F60(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // ebp
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rsi
	_WORD* v13; // rax
	__int64 v14; // rax
	unsigned __int64 v15; // rcx
	__int64 v16; // rax

	v3 = *(_DWORD*)(a3 + 40);
	if (a2)
	{
		v3 = *(_DWORD*)(a2 + 388);
		*(_DWORD*)(a2 + 476) = *(_DWORD*)(a3 + 176);
		*(_DWORD*)(a2 + 480) = *(_DWORD*)(a3 + 180);
		v7 = *(_DWORD*)(a3 + 200);
		*(_DWORD*)(a2 + 484) = v7;
		if (!v7)
		{
			v8 = sub_14020A3A0(*(_DWORD*)(a3 + 36));
			if (v8)
				*(_DWORD*)(a2 + 484) = *(_DWORD*)(v8 + 16);
		}
		if (!*(_DWORD*)(a2 + 484))
		{
			v9 = sub_140209B20(*(_DWORD*)(a3 + 32));
			if (v9)
				*(_DWORD*)(a2 + 484) = *(_DWORD*)(v9 + 20);
			if (!*(_DWORD*)(a2 + 484))
			{
				v10 = sub_140209F60(*(_DWORD*)(a3 + 28));
				if (v10)
					*(_DWORD*)(a2 + 484) = *(_DWORD*)(v10 + 12);
			}
		}
		v11 = *(_QWORD*)(a3 + 192);
		v12 = 0i64;
		if (v11)
		{
			if (v11 <= qword_140C3FE70)
				v13 = (_WORD*)(v11 + qword_140C3FE68);
			else
				v13 = 0i64;
		}
		else
		{
			v13 = 0i64;
		}
		*(_QWORD*)(a2 + 488) = v13;
		if (!v13 || !*v13)
		{
			v14 = sub_140444130(a1, (_DWORD*)a3);
			if (v14)
			{
				v15 = *(_QWORD*)(v14 + 24);
				if (v15 && v15 <= qword_140C3FE70)
					v12 = v15 + qword_140C3FE68;
				*(_QWORD*)(a2 + 488) = v12;
			}
		}
	LABEL_26:
		if (!v3)
			return 0i64;
		goto LABEL_27;
	}
	if (!v3)
	{
		v16 = sub_140444130(a1, (_DWORD*)a3);
		if (!v16)
			return 0i64;
		v3 = *(_DWORD*)(v16 + 20);
		goto LABEL_26;
	}
LABEL_27:
	if (!*(_DWORD*)(a1 + 16) && (*(_DWORD*)(a3 + 124) & 0x4000) == 0)
		sub_14020BD20(v3);
	return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

