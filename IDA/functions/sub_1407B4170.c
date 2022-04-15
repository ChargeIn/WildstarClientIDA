#include "../winhttp.h"

//----- (00000001407B4170) ----------------------------------------------------
__int64 __fastcall sub_1407B4170(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // r13
	unsigned int v6; // esi
	__int64 v7; // rax
	int* v8; // r14
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	_WORD* v11; // r15
	__int64 v12; // rbp
	__int64 v13; // rdi
	_QWORD* v14; // rbx
	int v15; // eax
	__int64 v16; // rdi
	__int64 v17; // rbx
	char* v18; // r14
	int* v19; // rbp
	__int64 v20; // rcx
	int* v21; // rdi
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	_WORD* v24; // r15
	__int64 v25; // r13
	__int64 v26; // rbp
	_QWORD* v27; // rbx
	__int64* v28; // rbx
	int* v29; // r15
	__int64 v30; // rdi
	unsigned __int64 v31; // rdi
	int v32; // eax
	__int64 v33; // rcx
	unsigned int v34; // eax
	int* v35; // rbp
	__int64 v36; // rbx
	unsigned __int64 v37; // rbx
	_WORD* v38; // r15
	__int64 v39; // rsi
	__int64 v40; // rdi
	_QWORD* v41; // rbx
	int v42; // eax
	void(__fastcall * **v43)(_QWORD); // rcx
	__int64 v44; // [rsp+20h] [rbp-58h] BYREF
	__int64 v46; // [rsp+88h] [rbp+10h] BYREF
	_QWORD* v47; // [rsp+90h] [rbp+18h]
	__int64 v48; // [rsp+98h] [rbp+20h] BYREF

	v47 = a3;
	v4 = a1;
	if (!a2 || !a3)
		return 2147942487i64;
	v6 = 0;
	v7 = 0i64;
	v8 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v7;
		while (*(_WORD*)(a2 + 2 * v7));
	}
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v8, (int*)a2, v10);
	v11 = (_WORD*)((char*)v8 + v10);
	if ((int*)((char*)v8 + v10))
		*v11 = 0;
	v12 = *(_QWORD*)(v4 + 24);
	v13 = v12;
	v14 = *(_QWORD**)(v12 + 8);
	while (v14)
	{
		if ((int)sub_1400454D0(v14[5], v14[6], (unsigned __int16*)v8, (__int64)v11) < 0)
		{
			v14 = (_QWORD*)v14[3];
		}
		else
		{
			v13 = (__int64)v14;
			v14 = (_QWORD*)v14[2];
		}
	}
	if (v13 == v12
		|| (v15 = sub_1400454D0((__int64)v8, (__int64)v11, *(unsigned __int16**)(v13 + 40), *(_QWORD*)(v13 + 48)),
			v46 = v13,
			v15 < 0))
	{
		v46 = v12;
	}
	v16 = v46;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	v17 = *(_QWORD*)(v4 + 24);
	if (v16 != v17)
	{
		v43 = *(void(__fastcall****)(_QWORD))(v16 + 64);
		*v47 = v43;
		(**v43)(v43);
		return 0i64;
	}
	v18 = (char*)a2;
	v19 = 0i64;
	if (*(_WORD*)a2)
	{
		v20 = -a2;
		v46 = -a2;
		while (*(_WORD*)v18 != 46)
		{
			if (*(_WORD*)v18 == 91)
			{
				if (v19)
					return 2147943568i64;
				v21 = 0i64;
				v22 = (__int64)&v18[v20] >> 1;
				if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v21 = sub_14018B280(2 * (v22 + 1), 0);
				v23 = 2 * v22;
				sub_1407DB590(v21, (int*)a2, v23);
				v24 = (_WORD*)((char*)v21 + v23);
				if ((int*)((char*)v21 + v23))
					*v24 = 0;
				v25 = *(_QWORD*)(v4 + 24);
				v26 = v25;
				v27 = *(_QWORD**)(v25 + 8);
				while (v27)
				{
					if ((int)sub_1400454D0(v27[5], v27[6], (unsigned __int16*)v21, (__int64)v24) < 0)
					{
						v27 = (_QWORD*)v27[3];
					}
					else
					{
						v26 = (__int64)v27;
						v27 = (_QWORD*)v27[2];
					}
				}
				if (v26 == v25
					|| (int)sub_1400454D0((__int64)v21, (__int64)v24, *(unsigned __int16**)(v26 + 40), *(_QWORD*)(v26 + 48)) < 0)
				{
					v44 = v25;
					v28 = &v44;
				}
				else
				{
					v48 = v26;
					v28 = &v48;
				}
				v4 = a1;
				v17 = *v28;
				if (v17 == *(_QWORD*)(a1 + 24))
				{
					if (v21)
						sub_14018B900((__int64)v21, 0);
					return 2147943568i64;
				}
				v20 = v46;
				v19 = (int*)&v18[v46 + 2 + a2];
				if (v21)
				{
					sub_14018B900((__int64)v21, 0);
					v20 = v46;
				}
			}
			if (*(_WORD*)v18 == 93)
			{
				if (!v19)
					return 2147943568i64;
				v29 = 0i64;
				v30 = (v18 - (char*)v19) >> 1;
				if ((unsigned __int64)(v30 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v29 = sub_14018B280(2 * (v30 + 1), 0);
				v31 = 2 * v30;
				sub_1407DB590(v29, v19, v31);
				if ((int*)((char*)v29 + v31))
					*(_WORD*)((char*)v29 + v31) = 0;
				v32 = sub_14018E820((WCHAR*)v29);
				if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v17 + 64) + 320i64))(
					*(_QWORD*)(v17 + 64),
					v32,
					&v46) >= 0)
				{
					v33 = v46;
					if (*((_WORD*)v18 + 1) == 46)
					{
						v34 = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD*))(*(_QWORD*)v46 + 88i64))(
							v46,
							(_WORD*)v18 + 2,
							v47);
						v33 = v46;
						v6 = v34;
					}
					else
					{
						*v47 = v46;
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
				}
				else
				{
					v6 = -2147023728;
				}
				if (v29)
				{
					sub_14018B900((__int64)v29, 0);
					return v6;
				}
				return v6;
			}
			v18 += 2;
			if (!*(_WORD*)v18)
				goto LABEL_44;
		}
		if (v19)
			return 2147943568i64;
		v35 = 0i64;
		v36 = (__int64)&v18[-a2] >> 1;
		if ((unsigned __int64)(v36 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v35 = sub_14018B280(2 * (v36 + 1), 0);
		v37 = 2 * v36;
		sub_1407DB590(v35, (int*)a2, v37);
		v38 = (_WORD*)((char*)v35 + v37);
		if ((int*)((char*)v35 + v37))
			*v38 = 0;
		v39 = *(_QWORD*)(v4 + 24);
		v40 = v39;
		v41 = *(_QWORD**)(v39 + 8);
		while (v41)
		{
			if ((int)sub_1400454D0(v41[5], v41[6], (unsigned __int16*)v35, (__int64)v38) < 0)
			{
				v41 = (_QWORD*)v41[3];
			}
			else
			{
				v40 = (__int64)v41;
				v41 = (_QWORD*)v41[2];
			}
		}
		if (v40 == v39
			|| (v42 = sub_1400454D0((__int64)v35, (__int64)v38, *(unsigned __int16**)(v40 + 40), *(_QWORD*)(v40 + 48)),
				v46 = v40,
				v42 < 0))
		{
			v46 = v39;
		}
		if (v46 == v39)
			v6 = -2147023728;
		else
			v6 = (*(__int64(__fastcall**)(_QWORD, _WORD*, _QWORD*))(**(_QWORD**)(v46 + 64) + 88i64))(
				*(_QWORD*)(v46 + 64),
				(_WORD*)v18 + 1,
				v47);
		if (v35)
			sub_14018B900((__int64)v35, 0);
		return v6;
	}
LABEL_44:
	if (v17 == *(_QWORD*)(v4 + 24))
		return 2147943568i64;
	return (*(__int64(__fastcall**)(_QWORD, _WORD*, _QWORD*))(**(_QWORD**)(v17 + 64) + 88i64))(
		*(_QWORD*)(v17 + 64),
		(_WORD*)v18 + 1,
		v47);
}

