#include "../winhttp.h"

//----- (00000001405C27F0) ----------------------------------------------------
__int64 __fastcall sub_1405C27F0(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // ebp
	unsigned int i; // edi
	__int64 v5; // rax
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // esi
	unsigned int v10; // eax
	unsigned int v11; // r14d
	unsigned int j; // ebp
	__int64 v13; // rax
	__int64 v14; // rdi
	unsigned int v15; // r8d
	__int64 v16; // r9
	__int64 v17; // rcx
	__int64 v18; // rbx
	bool v19; // al
	__int64 v20; // rdx
	__int64 k; // rax
	__int64 v22; // rax
	int* v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rax
	int v26; // edi
	__int64 result; // rax
	unsigned int v28; // esi
	unsigned int v29; // ebx
	__int64 v30; // rcx
	__int64 v31[2]; // [rsp+30h] [rbp-58h] BYREF
	int v32; // [rsp+40h] [rbp-48h] BYREF
	__int64 v33; // [rsp+48h] [rbp-40h]
	__int64 v34; // [rsp+50h] [rbp-38h]
	int* v35; // [rsp+90h] [rbp+8h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6B550, qword_140C63858);
	}
	else
	{
		if (dword_140C65558)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140214FE0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C641F0 + 40i64))(qword_140C641F0);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6B550, i, qword_140C63858);
		}
		else if (dword_140C65558)
		{
			v5 = 0i64;
		}
		else if ((int)sub_140214FE0() >= 0)
		{
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641F0 + 32i64))(qword_140C641F0, i);
		}
		else
		{
			v5 = 0i64;
		}
		v35 = (int*)v5;
		if (v5 && (*(_BYTE*)(v5 + 4) & 1) != 0)
		{
			v6 = *(_DWORD*)(v5 + 16);
			if (qword_140C63840)
			{
				v7 = qword_140C63840(off_140A6B518, v6, qword_140C63858);
			LABEL_24:
				v8 = v7;
				if (v7 && (*(_BYTE*)(v7 + 16) & 1) != 0)
				{
					v9 = *(_DWORD*)(v7 + 12);
					v34 = 0i64;
					v33 = 0i64;
					v32 = v9;
					sub_1404958B0((__int64)(a1 + 12), (__int64)v31, &v32);
					switch (v9)
					{
					case 0:
					case 1:
					case 5:
					case 8:
					case 13:
					case 14:
					case 15:
						goto LABEL_28;
					case 2:
						if ((*(_BYTE*)(v8 + 16) & 0x20) != 0)
							LABEL_28 :
							sub_140033260((__int64*)(v31[0] + 40), &v35);
						break;
					default:
						continue;
					}
				}
				continue;
			}
			if (!dword_140C6417C && (int)sub_140214BA0() >= 0)
			{
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E0 + 24i64))(qword_140C652E0, v6);
				goto LABEL_24;
			}
		}
	}
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6B5C0, qword_140C63858);
	}
	else
	{
		if (dword_140C64CA8)
		{
			v11 = 0;
			goto LABEL_38;
		}
		if ((int)sub_140215860() < 0)
		{
			v11 = 0;
			goto LABEL_38;
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63930 + 40i64))(qword_140C63930);
	}
	v11 = v10;
LABEL_38:
	for (j = 0; j < v11; ++j)
	{
		if (qword_140C63848)
		{
			v13 = qword_140C63848(off_140A6B5C0, j, qword_140C63858);
		}
		else
		{
			if (dword_140C64CA8 || (int)sub_140215860() < 0)
				continue;
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63930 + 32i64))(qword_140C63930, j);
		}
		v14 = v13;
		if (v13)
		{
			v15 = *(_DWORD*)(v13 + 4);
			if (v15)
			{
				v16 = a1[9];
				v31[1] = v13;
				LODWORD(v31[0]) = v15;
				v17 = *(_QWORD*)(v16 + 8);
				v18 = v16;
				v19 = 1;
				while (v17)
				{
					v18 = v17;
					v19 = v15 < *(_DWORD*)(v17 + 32);
					if (v15 >= *(_DWORD*)(v17 + 32))
						v17 = *(_QWORD*)(v17 + 24);
					else
						v17 = *(_QWORD*)(v17 + 16);
				}
				v20 = v18;
				if (!v19)
					goto LABEL_63;
				if (v18 != *(_QWORD*)(v16 + 16))
				{
					if (*(_BYTE*)v18 || *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8i64) != v18)
					{
						v20 = *(_QWORD*)(v18 + 16);
						if (v20)
						{
							for (k = *(_QWORD*)(v20 + 24); k; k = *(_QWORD*)(k + 24))
								v20 = k;
						}
						else
						{
							v20 = *(_QWORD*)(v18 + 8);
							if (v18 == *(_QWORD*)(v20 + 16))
							{
								do
								{
									v22 = v20;
									v20 = *(_QWORD*)(v20 + 8);
								} while (v22 == *(_QWORD*)(v20 + 16));
							}
						}
					}
					else
					{
						v20 = *(_QWORD*)(v18 + 24);
					}
				LABEL_63:
					if (*(_DWORD*)(v20 + 32) < v15)
					{
						if (v18 == v16 || v15 < *(_DWORD*)(v18 + 32))
						{
							v23 = sub_14018B280(48i64, 0);
							if (v23 != (int*)-32i64)
							{
								*((_QWORD*)v23 + 4) = v31[0];
								*((_QWORD*)v23 + 5) = v14;
							}
							*(_QWORD*)(v18 + 16) = v23;
							v25 = a1[9];
							if (v18 == v25)
							{
								*(_QWORD*)(v25 + 8) = v23;
								*(_QWORD*)(a1[9] + 24i64) = v23;
							}
							else if (v18 == *(_QWORD*)(v25 + 16))
							{
								*(_QWORD*)(v25 + 16) = v23;
							}
						}
						else
						{
							v23 = sub_14018B280(48i64, 0);
							if (v23 != (int*)-32i64)
							{
								*((_QWORD*)v23 + 4) = v31[0];
								*((_QWORD*)v23 + 5) = v14;
							}
							*(_QWORD*)(v18 + 24) = v23;
							v24 = a1[9];
							if (v18 == *(_QWORD*)(v24 + 24))
								*(_QWORD*)(v24 + 24) = v23;
						}
						*((_QWORD*)v23 + 1) = v18;
						*((_QWORD*)v23 + 2) = 0i64;
						*((_QWORD*)v23 + 3) = 0i64;
						sub_1400081C0((__int64)v23, (_QWORD*)(a1[9] + 8i64));
						++a1[10];
					}
					continue;
				}
				sub_140055E80((__int64)(a1 + 8), &v35, v17, v18, v31);
			}
		}
	}
	a1[5] = 0i64;
	v26 = 5;
	a1[6] = 5i64;
	*a1 = qword_140C79890;
	a1[1] = qword_140C79890;
	a1[2] = qword_140C79890;
	a1[3] = qword_140C79890;
	a1[4] = qword_140C79890;
	result = (__int64)qword_140C63838;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A6C6D0, qword_140C63858);
	}
	else
	{
		if (dword_140C65418)
		{
			v28 = 0;
			goto LABEL_86;
		}
		result = sub_14022A3E0();
		if ((int)result < 0)
		{
			v28 = 0;
			goto LABEL_86;
		}
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64EE8 + 40i64))(qword_140C64EE8);
	}
	v28 = result;
LABEL_86:
	v29 = 0;
	if (v28)
	{
		do
		{
			if (qword_140C63848)
			{
				result = qword_140C63848(off_140A6C6D0, v29, qword_140C63858);
			}
			else if (dword_140C65418)
			{
				result = 0i64;
			}
			else if ((int)sub_14022A3E0() >= 0)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64EE8 + 32i64))(qword_140C64EE8, v29);
			}
			else
			{
				result = 0i64;
			}
			v30 = *(int*)(result + 8);
			if (v26 != (_DWORD)v30)
			{
				if (v26 != 5)
				{
					result = v26;
					HIDWORD(a1[v26]) = v29;
				}
				v26 = v30;
				LODWORD(a1[v30]) = v29;
			}
			++v29;
		} while (v29 < v28);
		if (v26 != 5)
		{
			result = v26;
			HIDWORD(a1[v26]) = v28;
		}
	}
	return result;
}
// 1405C2B1F: conditional instruction was optimized away because rcx.8==0
// 140A6B518: using guessed type wchar_t *off_140A6B518[2];
// 140A6B550: using guessed type wchar_t *off_140A6B550[2];
// 140A6B5C0: using guessed type wchar_t *off_140A6B5C0[2];
// 140A6C6D0: using guessed type wchar_t *off_140A6C6D0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63930: using guessed type __int64 qword_140C63930;
// 140C6417C: using guessed type int dword_140C6417C;
// 140C641F0: using guessed type __int64 qword_140C641F0;
// 140C64CA8: using guessed type int dword_140C64CA8;
// 140C64EE8: using guessed type __int64 qword_140C64EE8;
// 140C652E0: using guessed type __int64 qword_140C652E0;
// 140C65418: using guessed type int dword_140C65418;
// 140C65558: using guessed type int dword_140C65558;
// 140C79890: using guessed type __int64 qword_140C79890;

