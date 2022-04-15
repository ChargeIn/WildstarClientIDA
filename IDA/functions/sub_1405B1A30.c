#include "../winhttp.h"

//----- (00000001405B1A30) ----------------------------------------------------
void __fastcall sub_1405B1A30(__int64 a1, __int64* a2)
{
	__int64* v2; // rcx
	__int64 v4; // rax
	_DWORD* v5; // r13
	unsigned int i; // ebp
	unsigned int v7; // eax
	_DWORD* v8; // rax
	_DWORD* v9; // rdi
	int v10; // r8d
	__int64 v11; // rdx
	BOOL v12; // eax
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rsi

	v2 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
	{
		while (1)
		{
			v4 = *v2;
			if (*(_DWORD*)(*v2 + 48) == 5)
				break;
			if (++v2 == *((__int64**)&xmmword_140C7DFC0 + 1))
				return;
		}
		if (v4)
		{
			v5 = (_DWORD*)sub_1402070A0(*(_DWORD*)(v4 + 64));
			if (v5)
			{
				for (i = 0; ; ++i)
				{
					if (qword_140C63838)
					{
						v7 = qword_140C63838(off_140A6A9B8, qword_140C63858);
					}
					else
					{
						if (dword_140C64B88 || (int)sub_140206E40() < 0)
							return;
						v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64DE8 + 40i64))(qword_140C64DE8);
					}
					if (i >= v7)
						return;
					if (qword_140C63848)
					{
						v8 = (_DWORD*)qword_140C63848(off_140A6A9B8, i, qword_140C63858);
					}
					else
					{
						if (dword_140C64B88 || (int)sub_140206E40() < 0)
							continue;
						v8 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DE8 + 32i64))(
							qword_140C64DE8,
							i);
					}
					v9 = v8;
					if (v8)
					{
						v10 = *v8;
						if (*v8 != *v5 && v8[3] == v5[3])
						{
							v11 = xmmword_140C7DFC0;
							v12 = 0;
							if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
							{
							LABEL_26:
								v13 = a2[1];
								v14 = sub_14018DB00(*a2, v13 + 1, 8i64);
								v15 = v14;
								*(_QWORD*)&v14[2 * v13] = v9;
								if ((int*)*a2 != v14)
								{
									sub_1407DB590(v14, (int*)*a2, 8 * a2[1]);
									if (*a2)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
									*a2 = (__int64)v15;
								}
								a2[1] = v13 + 1;
							}
							else
							{
								while (!v12)
								{
									v12 = *(_DWORD*)(*(_QWORD*)v11 + 64i64) == v10;
									v11 += 8i64;
									if (v11 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
									{
										if (v12)
											break;
										goto LABEL_26;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140A6A9B8: using guessed type wchar_t *off_140A6A9B8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B88: using guessed type int dword_140C64B88;
// 140C64DE8: using guessed type __int64 qword_140C64DE8;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

