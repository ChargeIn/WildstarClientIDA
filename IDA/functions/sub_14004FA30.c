#include "../winhttp.h"

//----- (000000014004FA30) ----------------------------------------------------
__int64 __fastcall sub_14004FA30(__int64 a1)
{
	__int64 v1; // r13
	unsigned int v2; // eax
	unsigned int v3; // r15d
	int* v4; // rax
	__int64(__fastcall * v5)(wchar_t**, __int64); // rbx
	int* v6; // rsi
	unsigned int v7; // eax
	unsigned int v8; // r14d
	int v9; // eax
	__int64 v10; // rdi
	__int64 v11; // rbp
	__int64 v12; // rax
	_DWORD* v13; // rbx
	int v14; // edi
	int v15; // r15d
	__int64 v16; // rax
	__int64 v17; // rax
	_QWORD* v18; // rsi
	unsigned __int64 v19; // r13
	int** v20; // r12
	int* v21; // rax
	int* v22; // rcx
	int v23; // ebx
	__int64 result; // rax
	__int64 v25; // [rsp+20h] [rbp-98h]
	unsigned int v26; // [rsp+28h] [rbp-90h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-88h] BYREF
	__int128 v28; // [rsp+38h] [rbp-80h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp-68h] BYREF
	__int128 v30; // [rsp+58h] [rbp-60h]
	__int64 v31; // [rsp+C0h] [rbp+8h] BYREF
	int v32; // [rsp+C8h] [rbp+10h]
	int v33; // [rsp+D0h] [rbp+18h]
	int* v34; // [rsp+D8h] [rbp+20h]

	v31 = a1;
	v1 = a1;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6CDD0, qword_140C63858);
	}
	else if (dword_140C641A4)
	{
		v2 = 0;
	}
	else if ((int)sub_140232BE0() >= 0)
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EA0 + 40i64))(qword_140C63EA0);
	}
	else
	{
		v2 = 0;
	}
	v3 = v2;
	v26 = v2;
	v4 = sub_14018DB00(0i64, v2, 4i64);
	v5 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	v6 = 0i64;
	if (v4)
		v6 = v4;
	v34 = v6;
	if (qword_140C63838)
	{
		v7 = qword_140C63838(off_140A6CDD0, qword_140C63858);
	}
	else
	{
		if (dword_140C641A4)
		{
			v7 = 0;
			goto LABEL_18;
		}
		if ((int)sub_140232BE0() >= 0)
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EA0 + 40i64))(qword_140C63EA0);
		else
			v7 = 0;
	}
	v5 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_18:
	sub_1407E4830(v6, 0i64, 4i64 * v7);
	v8 = 0;
	if (v5)
	{
		v9 = v5(off_140A6CDD0, qword_140C63858);
	}
	else if (dword_140C641A4)
	{
		v9 = 0;
	}
	else if ((int)sub_140232BE0() >= 0)
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EA0 + 40i64))(qword_140C63EA0);
	}
	else
	{
		v9 = 0;
	}
	v10 = v9;
	v11 = 0i64;
	v32 = v9;
	v25 = v9;
	if (v9 > 0)
	{
		while (1)
		{
			if (qword_140C63848)
			{
				v12 = qword_140C63848(off_140A6CDD0, v8, qword_140C63858);
			}
			else
			{
				if (dword_140C641A4 || (int)sub_140232BE0() < 0)
					goto LABEL_50;
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EA0 + 32i64))(qword_140C63EA0, v8);
			}
			v13 = (_DWORD*)v12;
			if (v12)
			{
				v14 = 0;
				v33 = *(_DWORD*)(v12 + 8);
				v15 = 0;
				LODWORD(v28) = 0;
				if (v33 != 2)
				{
					switch (v33)
					{
					case 3:
						v17 = sub_140235480(*(_DWORD*)(v12 + 4));
						break;
					case 4:
						v17 = sub_1402358C0(*(_DWORD*)(v12 + 4));
						break;
					case 5:
						v16 = sub_1402336C0(*(_DWORD*)(v12 + 4));
					LABEL_43:
						if (v16)
							v14 = *(_DWORD*)(v16 + 4);
						goto LABEL_45;
					default:
						v14 = *(_DWORD*)(v12 + 4);
						v6[v11] = v14;
					LABEL_45:
						v18 = (_QWORD*)(v1 + 640);
						if (*(_QWORD*)(v1 + 640) == *(_QWORD*)(v1 + 648))
							sub_1400290D0(v1 + 640);
						v19 = (*(__int64(__fastcall**)(_DWORD*))(v1 + 664))(v13);
						v20 = (int**)(v18[2] + 8 * (v19 % v18[1]));
						v21 = sub_14018B280(32i64, 0);
						if (v21)
						{
							v22 = *v20;
							*(_QWORD*)v21 = v19;
							*((_QWORD*)v21 + 1) = v22;
							LODWORD(v22) = *v13;
							v21[5] = v14;
							v21[4] = (int)v22;
							LODWORD(v22) = v33;
							v21[6] = v15;
							v21[7] = (int)v22;
						}
						v10 = v25;
						v1 = v31;
						*v20 = v21;
						++* v18;
						v6 = v34;
						goto LABEL_50;
					}
					if (v17)
					{
						v14 = *(_DWORD*)(v17 + 8);
						v15 = *(_DWORD*)(v17 + 4);
					}
					goto LABEL_45;
				}
				v16 = sub_1402347C0(*(_DWORD*)(v12 + 4));
				goto LABEL_43;
			}
		LABEL_50:
			++v11;
			++v8;
			if (v11 >= v10)
			{
				v9 = v32;
				v3 = v26;
				break;
			}
		}
	}
	if (!v9)
	{
		*(_QWORD*)&v28 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v29 = TlsValue;
		v31 = 0x141E50360i64;
		v30 = v28;
		v23 = sub_1401971E0(&dword_140C8A030, 19, &v31, &v29);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
		if (v23)
			DebugBreak();
	}
	result = (*(__int64(__fastcall**)(__int64, __int64, int*, _QWORD))(*(_QWORD*)qword_140C65848 + 16i64))(
		qword_140C65848,
		v1 + 744,
		v6,
		v3);
	if (v6)
		return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return result;
}
// 140A6CDD0: using guessed type wchar_t *off_140A6CDD0[2];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EA0: using guessed type __int64 qword_140C63EA0;
// 140C641A4: using guessed type int dword_140C641A4;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C8A030: using guessed type _DWORD dword_140C8A030;

