#include "../winhttp.h"

//----- (0000000140644610) ----------------------------------------------------
_QWORD* __fastcall sub_140644610(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
	__int64 v6; // rbp
	_QWORD* result; // rax
	_QWORD* v11; // rbx
	__int64* v12; // rdi
	__int64 v13; // rcx
	unsigned int v14; // eax
	__int64 v15; // r8
	unsigned int v16; // edi
	int v17; // eax
	__int64 v18; // rax
	__int64 v19; // rdi
	int* v20; // rax
	__int64 v21; // rax

	v6 = qword_140C65C28;
	result = *(_QWORD**)(qword_140C65C28 + 112);
	v11 = (_QWORD*)result[2];
	if (v11 != result)
	{
		do
		{
			v12 = *(__int64**)(v11[5] + 40i64);
			v13 = *v12;
			v14 = *(_DWORD*)(*v12 + 12);
			if ((v14 & 2) == 0 && a4 == ((v14 >> 2) & 1))
			{
				v15 = *(unsigned int*)(v13 + 52);
				if (!(_DWORD)v15
					|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							*(_QWORD*)(qword_140C65898 + 120),
							v15,
							0i64,
							0i64,
							0))
				{
					v16 = *(_DWORD*)(*v12 + 8);
					if (!a6 || (v17 = sub_140644D30(v13, v16), v17 != 5) && v17 != 46)
					{
						if (a5)
						{
							if (v16)
							{
								while (v16 != a2)
								{
									if (qword_140C63840)
									{
										v18 = qword_140C63840(off_140A69170, v16, qword_140C63858);
									}
									else
									{
										if (dword_140C638BC || (int)sub_1401E9680() < 0)
											goto LABEL_24;
										v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(
											qword_140C64768,
											v16);
									}
									if (v18)
									{
										v16 = *(_DWORD*)(v18 + 12);
										if (v16)
											continue;
									}
									goto LABEL_24;
								}
							LABEL_21:
								v19 = *(_QWORD*)(a3 + 8);
								v20 = sub_14018B280(24i64, 0);
								if (v20 != (int*)-16i64)
									*((_QWORD*)v20 + 2) = v11[5];
								*(_QWORD*)v20 = v19;
								*((_QWORD*)v20 + 1) = *(_QWORD*)(v19 + 8);
								**(_QWORD**)(v19 + 8) = v20;
								*(_QWORD*)(v19 + 8) = v20;
							}
						}
						else if (v16 == a2)
						{
							goto LABEL_21;
						}
					}
				}
			}
		LABEL_24:
			v21 = v11[3];
			if (v21)
			{
				v11 = (_QWORD*)v11[3];
				for (result = *(_QWORD**)(v21 + 16); result; result = (_QWORD*)result[2])
					v11 = result;
			}
			else
			{
				for (result = (_QWORD*)v11[1]; v11 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v11 = result;
				if ((_QWORD*)v11[3] != result)
					v11 = result;
			}
		} while (v11 != *(_QWORD**)(v6 + 112));
	}
	return result;
}
// 1406446D0: variable 'v13' is possibly undefined
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

