#include "../winhttp.h"

//----- (0000000140624200) ----------------------------------------------------
__int64 __fastcall sub_140624200(__int64 a1)
{
	bool v3; // zf
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rcx
	int v8; // r14d
	void(__fastcall * v9)(__int64, __int64, __int64, int, int, __int64); // rsi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16; // edi
	int v17; // r15d
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // r14d
	void(__fastcall * v21)(__int64, __int64, __int64, int, int, __int64); // rsi
	__int64 v22; // rcx
	__int64 v23; // rcx
	int v24; // r15d
	__int64 v25; // rcx
	__int64 v26; // rcx
	int v27; // r14d
	void(__fastcall * v28)(__int64, __int64, __int64, int, int, __int64); // rsi
	__int64 v29; // rcx
	__int64 v30[4]; // [rsp+20h] [rbp-E0h] BYREF
	int v31[2]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v32; // [rsp+48h] [rbp-B8h]
	__int64 v33; // [rsp+50h] [rbp-B0h]
	__int64 v34; // [rsp+58h] [rbp-A8h]
	int v35[2]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v36; // [rsp+68h] [rbp-98h]
	__int64 v37; // [rsp+70h] [rbp-90h]
	__int64 v38; // [rsp+78h] [rbp-88h]
	__int64 v39[4]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v40[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v41[4]; // [rsp+C0h] [rbp-40h] BYREF
	int v42[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v43; // [rsp+E8h] [rbp-18h]
	__int64 v44; // [rsp+F0h] [rbp-10h]
	__int64 v45; // [rsp+F8h] [rbp-8h]

	if (*(_DWORD*)(a1 + 676))
		return *(unsigned int*)(a1 + 684);
	v3 = *(_DWORD*)(a1 + 696) == 0;
	*(_DWORD*)(a1 + 684) = 1;
	if (v3)
	{
		sub_140622B70(a1);
		*(_DWORD*)(a1 + 700) = 1;
	}
	v4 = *(_DWORD*)(a1 + 968);
	if (v4)
	{
		v5 = v4 - 1;
		if (!v5)
		{
		LABEL_40:
			sub_140622B70(a1);
			return 0i64;
		}
		v6 = v5 - 1;
		if (v6)
		{
			if (v6 != 1)
				return 0i64;
			v7 = *(_QWORD*)(a1 + 56);
			if (!v7)
				goto LABEL_21;
			v8 = 2016;
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 408i64))(v7, 2016i64))
			{
				v9 = sub_140624B60;
			}
			else
			{
				v8 = 2017;
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2017i64))
				{
					v9 = sub_140624C10;
				}
				else if (*(_DWORD*)(a1 + 684)
					|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
						*(_QWORD*)(a1 + 56),
						2017i64))
				{
					if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
						*(_QWORD*)(a1 + 56),
						2018i64))
					{
						sub_14061A600(a1);
						goto LABEL_21;
					}
					v8 = 2018;
					v9 = sub_140624A90;
				}
				else
				{
					v9 = sub_140624C10;
				}
			}
			v10 = *(_QWORD*)(a1 + 56);
			v31[0] = v8;
			v31[1] = 0;
			v32 = 1065353216i64;
			v33 = 0i64;
			v34 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v10 + 584i64))(v10, 0i64, v31);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
				*(_QWORD*)(a1 + 56),
				v9,
				a1);
		LABEL_21:
			v11 = *(_QWORD*)(a1 + 48);
			if (v11 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 408i64))(v11, 165i64))
			{
				v12 = *(_QWORD*)(a1 + 48);
				v41[0] = 165i64;
				v41[1] = 1065353216i64;
				v41[2] = 0i64;
				v41[3] = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, v41);
				(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(int, int, int, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
					*(_QWORD*)(a1 + 48),
					sub_1406235E0,
					a1);
				v13 = *(_QWORD*)(a1 + 96);
				if (v13)
				{
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 408i64))(v13, 165i64))
					{
						v14 = *(_QWORD*)(a1 + 96);
						v39[0] = 165i64;
						v39[1] = 1065353216i64;
						v39[2] = 0i64;
						v39[3] = 0i64;
						(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v14 + 584i64))(v14, 0i64, v39);
					}
				}
				return 1i64;
			}
			goto LABEL_40;
		}
		v15 = *(_QWORD*)(a1 + 48);
		v16 = 0;
		v17 = 1;
		if (v15 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 408i64))(v15, 2018i64))
		{
			v18 = *(_QWORD*)(a1 + 48);
			v30[0] = 2018i64;
			v30[1] = 1065353216i64;
			v30[2] = 0i64;
			v30[3] = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v18 + 584i64))(v18, 0i64, v30);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
				*(_QWORD*)(a1 + 48),
				sub_140624A90,
				a1);
			v17 = 0;
		}
		v19 = *(_QWORD*)(a1 + 56);
		if (v19)
		{
			if (*(_DWORD*)(a1 + 684)
				|| (v20 = 2017, !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 408i64))(v19, 2017i64)))
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2018i64))
				{
					v20 = 2018;
					v21 = sub_140624A90;
				}
				else
				{
					v20 = 0;
					v21 = 0i64;
				}
			}
			else
			{
				v21 = sub_140624C10;
			}
			v22 = *(_QWORD*)(a1 + 56);
			v35[0] = v20;
			v35[1] = 0;
			v36 = 1065353216i64;
			v37 = 0i64;
			v38 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v22 + 584i64))(v22, 0i64, v35);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
				*(_QWORD*)(a1 + 56),
				v21,
				a1);
			if (v20)
				return 1i64;
			sub_14061A600(a1);
		}
		if (v17)
		{
			LOBYTE(v16) = *(_QWORD*)(a1 + 1160) == 0i64;
		LABEL_58:
			sub_140622B70(a1);
			if (v16)
				*(_DWORD*)(a1 + 700) = 1;
		}
	}
	else
	{
		v23 = *(_QWORD*)(a1 + 48);
		v16 = 0;
		v24 = 1;
		if (v23 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v23 + 408i64))(v23, 2018i64))
		{
			v25 = *(_QWORD*)(a1 + 48);
			v40[0] = 2018i64;
			v40[1] = 1065353216i64;
			v40[2] = 0i64;
			v40[3] = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v25 + 584i64))(v25, 0i64, v40);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
				*(_QWORD*)(a1 + 48),
				sub_140624A90,
				a1);
			v24 = 0;
		}
		v26 = *(_QWORD*)(a1 + 56);
		if (v26)
		{
			if (*(_DWORD*)(a1 + 684)
				|| (v27 = 2017, !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 408i64))(v26, 2017i64)))
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2018i64))
				{
					v27 = 2018;
					v28 = sub_140624A90;
				}
				else
				{
					v27 = 0;
					v28 = 0i64;
				}
			}
			else
			{
				v28 = sub_140624C10;
			}
			v29 = *(_QWORD*)(a1 + 56);
			v42[0] = v27;
			v42[1] = 0;
			v43 = 1065353216i64;
			v44 = 0i64;
			v45 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v29 + 584i64))(v29, 0i64, v42);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
				*(_QWORD*)(a1 + 56),
				v28,
				a1);
			if (v27)
				return 1i64;
			sub_14061A600(a1);
		}
		if (v24)
		{
			if (!*(_QWORD*)(a1 + 1160) && !*(_QWORD*)(a1 + 48))
				v16 = 1;
			goto LABEL_58;
		}
	}
	return 1i64;
}
// 1406235E0: using guessed type __int64 __fastcall sub_1406235E0(int, int, int, int, int, __int64);

