#include "../winhttp.h"

//----- (00000001406C83A0) ----------------------------------------------------
void __fastcall sub_1406C83A0(char* a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	__int64 v5; // r12
	unsigned int v6; // edi
	__int64 v7; // rsi
	void(__fastcall * **v8)(_QWORD, __int64); // rax
	void(__fastcall * **v9)(_QWORD, __int64); // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rax
	void(__fastcall * **v11)(_QWORD, __int64); // rbx
	__int64 v12; // rbx
	__int64 v13; // r15
	__int64 v14; // rcx
	_DWORD* v15; // r14
	__int64 v16; // rcx
	void(__fastcall * **v17)(_QWORD, __int64); // rcx
	char v18; // al
	__int128 v19; // [rsp+30h] [rbp-38h] BYREF
	unsigned __int64 v20; // [rsp+80h] [rbp+18h]

	v20 = a3;
	v5 = a4;
	v6 = a2;
	v7 = (__int64)a1;
	if (!*a5)
	{
		if (a2 == 1027 || a2 == 28)
		{
			v8 = sub_1406C5440((__int64)a1);
			v9 = v8;
			if (v8)
			{
				if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v8)[21])(v8) == 2)
					(*v9)[8](v9, 0i64);
			}
		}
		if (v6 == 1029)
		{
			v10 = sub_1406C5440(v7);
			v11 = v10;
			if (v10)
			{
				if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v10)[1])(v10) == 2
					&& ((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v11)[3])(v11) == v5)
				{
					v12 = qword_140C65898;
					v13 = *(unsigned int*)(v7 + 1496);
					if (*(_QWORD*)(qword_140C65898 + 120))
					{
						if ((unsigned int)v13 < 0x30)
						{
							v14 = v13 + 48i64 * *(unsigned int*)(qword_140C65898 + 28140);
							v15 = *(_DWORD**)(qword_140C65898 + 8 * v14 + 2752);
							if (!v15
								|| (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v15 + 8i64))(*(_QWORD*)(qword_140C65898
									+ 8 * v14
									+ 2752))
								|| v15[69])
							{
								v16 = *(_QWORD*)(v12 + 8 * (v13 + 48i64 * *(unsigned int*)(v12 + 28140)) + 2752);
								if (v16)
								{
									if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16))
									{
										v17 = *(void(__fastcall****)(_QWORD, __int64))(v12
											+ 8 * (v13 + 48i64 * *(unsigned int*)(v12 + 28140))
											+ 2752);
										if (v17)
											(**v17)(v17, 1i64);
									}
								}
								*(_QWORD*)(v12 + 8 * (v13 + 48i64 * *(unsigned int*)(v12 + 28140)) + 2752) = 0i64;
								v19 = 0ui64;
								v18 = *(_BYTE*)(v12 + 28140);
								*(_QWORD*)((char*)&v19 + 4) = 0i64;
								LOBYTE(v19) = v13;
								BYTE12(v19) = v18;
								sub_1403F4900(v12, 0x16Au, (__int64)&v19);
							}
						}
					}
				}
			}
		}
		a3 = v20;
		a4 = v5;
		a2 = v6;
		a1 = (char*)v7;
	}
	sub_1400D1AF0(a1, a2, a3, a4, a5);
}
// 140C65898: using guessed type __int64 qword_140C65898;

