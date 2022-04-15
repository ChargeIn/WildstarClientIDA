#include "../winhttp.h"

//----- (0000000140472190) ----------------------------------------------------
void __fastcall sub_140472190(__int64* a1, unsigned int a2, int* a3, int a4, int a5, __int64 a6)
{
	int v9; // r14d
	_DWORD* v10; // rcx
	bool v11; // zf
	__int64 v12; // rax
	__int64* v13; // r8
	__int64 v14; // rdx
	_DWORD* v15; // rcx
	__int64 v16; // rcx
	unsigned int v17; // ebx
	int v18; // eax
	int v19; // ecx
	__int64 v20; // [rsp+40h] [rbp-29h] BYREF
	int v21; // [rsp+48h] [rbp-21h]
	__int64 v22; // [rsp+4Ch] [rbp-1Dh]
	__int64 v23; // [rsp+54h] [rbp-15h]
	int v24; // [rsp+5Ch] [rbp-Dh]
	__int64 v25; // [rsp+60h] [rbp-9h] BYREF
	int v26; // [rsp+68h] [rbp-1h]
	__int64 v27; // [rsp+6Ch] [rbp+3h]
	__int64 v28; // [rsp+74h] [rbp+Bh]
	int v29; // [rsp+7Ch] [rbp+13h]
	int v30[2]; // [rsp+80h] [rbp+17h] BYREF
	__int64 v31; // [rsp+88h] [rbp+1Fh]
	__int64 v32; // [rsp+90h] [rbp+27h]
	__int64 v33; // [rsp+98h] [rbp+2Fh]

	*(_DWORD*)(a6 + 4i64 * a2 + 488) = 0;
	v9 = 0;
	if (a4)
	{
		if (a2 - 4 > 1)
			return;
		if (a2 == 4)
		{
			v10 = *(_DWORD**)(a6 + 5600);
		}
		else
		{
			if (a2 != 5)
			{
			LABEL_32:
				v16 = *(_QWORD*)(a6 + 5864);
				v29 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v16 + 592i64))(v16, a2, &v25);
				if (!(_DWORD)v25)
				{
					v17 = a2 - 4;
					if (v17)
					{
						if (v17 == 1)
						{
							v30[0] = 0;
							v32 = (__int64)sub_140471430;
							v31 = a6;
							v33 = 0i64;
							sub_140195960(a6 + 5088, 2000, (__int64)v30, 4);
						}
					}
					else
					{
						v30[0] = 0;
						v32 = (__int64)sub_140470D80;
						v31 = a6;
						v33 = 0i64;
						sub_140195960(a6 + 5016, 2000, (__int64)v30, 4);
					}
				}
				return;
			}
			v10 = *(_DWORD**)(a6 + 5608);
		}
		if (v10)
		{
			if (v10[105])
			{
				v11 = v10[106] == 2;
				v10[105] = 0;
				if (v11 || !v10[126] || v10[127])
					(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v10 + 80i64))(v10, 1i64);
			}
		}
		goto LABEL_32;
	}
	switch (a2)
	{
	case 0u:
		sub_14046CDC0(a6, 1, 0);
		return;
	case 4u:
	case 5u:
		if (a2 == 4)
		{
			v15 = *(_DWORD**)(a6 + 5600);
		}
		else
		{
			if (a2 != 5)
			{
			LABEL_30:
				sub_14046C8E0(a6, a2, 0, 0, 1065353216, 0, 1, 1);
				goto LABEL_31;
			}
			v15 = *(_DWORD**)(a6 + 5608);
		}
		if (!v15)
			goto LABEL_30;
		v11 = v15[106] == 2;
		v15[105] = 1;
		if (v11)
			goto LABEL_29;
		if (v15[126] && !v15[127])
		{
			sub_14071A6E0((__int64)v15, 1, 1);
			v9 = 1;
			goto LABEL_31;
		}
		if (!v15[99])
		{
		LABEL_29:
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v15 + 80i64))(v15, 0i64);
			v9 = 1;
		}
		else
		{
			sub_14071A6E0((__int64)v15, 2, 1);
			v9 = 1;
		}
	LABEL_31:
		sub_14046CDC0(a6, 0, a3[4]);
		if (v9)
			goto LABEL_32;
		return;
	case 6u:
		v25 = 0i64;
		v27 = 0i64;
		v28 = 0i64;
		v29 = 0;
		v13 = &v25;
		v26 = 1065353216;
		v14 = 6i64;
		goto LABEL_38;
	case 7u:
		v12 = *a1;
		v20 = 0i64;
		v21 = 1065353216;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0;
		(*(void(__fastcall**)(__int64*, __int64, __int64*))(v12 + 584))(a1, 7i64, &v20);
		*(_DWORD*)(a6 + 4820) = 0;
		*(_DWORD*)(a6 + 4880) = 0;
		sub_14046CDC0(a6, 0, a3[4]);
		return;
	case 9u:
		v18 = sub_1401AE6A0(0, 0xFFFF);
		v19 = *a3;
		v31 = 1065353216i64;
		v30[0] = v19;
		v30[1] = v18;
		v32 = 45i64;
		v33 = 0i64;
		v13 = (__int64*)v30;
		v14 = 9i64;
	LABEL_38:
		(*(void(__fastcall**)(__int64*, __int64, __int64*))(*a1 + 584))(a1, v14, v13);
		return;
	default:
		return;
	}
}

