#include "../winhttp.h"

//----- (00000001400513C0) ----------------------------------------------------
_DWORD* __fastcall sub_1400513C0(__int64 a1, _DWORD* a2, int a3, int a4)
{
	unsigned __int64 v8; // rbp
	_QWORD* v9; // rbx
	unsigned __int64 v10; // rbp
	_QWORD* v11; // rbx
	int* v12; // rbx
	int v13; // eax
	unsigned __int64 v14; // rbp
	_QWORD* v15; // rbx
	int v17; // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+24h] [rbp-24h]
	int v19; // [rsp+28h] [rbp-20h]

	v17 = a3;
	v18 = a4;
	v19 = 0;
	v8 = (*(__int64(__fastcall**)(int*))(a1 + 1504))(&v17);
	v9 = *(_QWORD**)(*(_QWORD*)(a1 + 1496) + 8 * (v8 % *(_QWORD*)(a1 + 1488)));
	if (v9)
	{
		while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1512))(&v17, v9 + 2))
		{
			v9 = (_QWORD*)v9[1];
			if (!v9)
				goto LABEL_5;
		}
		v12 = (int*)v9 + 7;
		if (v12)
			goto LABEL_12;
	}
LABEL_5:
	if (a3)
	{
		v18 = 0;
		v10 = (*(__int64(__fastcall**)(int*))(a1 + 1504))(&v17);
		v11 = *(_QWORD**)(*(_QWORD*)(a1 + 1496) + 8 * (v10 % *(_QWORD*)(a1 + 1488)));
		if (v11)
		{
			while (v10 != *v11 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1512))(&v17, v11 + 2))
			{
				v11 = (_QWORD*)v11[1];
				if (!v11)
					goto LABEL_14;
			}
			v12 = (int*)v11 + 7;
			if (v12)
				goto LABEL_12;
		}
	LABEL_14:
		v18 = a3;
	}
	if (!a4)
		goto LABEL_22;
	v17 = 0;
	v14 = (*(__int64(__fastcall**)(int*))(a1 + 1504))(&v17);
	v15 = *(_QWORD**)(*(_QWORD*)(a1 + 1496) + 8 * (v14 % *(_QWORD*)(a1 + 1488)));
	if (!v15)
		goto LABEL_22;
	while (v14 != *v15 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1512))(&v17, v15 + 2))
	{
		v15 = (_QWORD*)v15[1];
		if (!v15)
			goto LABEL_22;
	}
	v12 = (int*)v15 + 7;
	if (!v12)
	{
	LABEL_22:
		v13 = *(_DWORD*)(a1 + 1528);
		goto LABEL_23;
	}
LABEL_12:
	v13 = *v12;
LABEL_23:
	*a2 = v13;
	return a2;
}

