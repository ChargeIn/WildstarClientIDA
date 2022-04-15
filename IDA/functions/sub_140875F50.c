#include "../winhttp.h"

//----- (0000000140875F50) ----------------------------------------------------
__int64 __fastcall sub_140875F50(__int64 a1, __int64 a2)
{
	_QWORD** v2; // r14
	unsigned int v3; // edx
	__int64 v5; // rbp
	__int64 v6; // rbx
	__int64** v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdi
	unsigned int v12; // ebx
	_QWORD* j; // rbx
	__int64 v14; // rax
	__int64 v15; // rdi
	unsigned int v16; // edx
	_QWORD* i; // rbx
	__int64 v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rbp
	__int64 v22; // rbx
	__int64** v23; // rdi
	__int64 v25; // [rsp+20h] [rbp-18h]

	v2 = *(_QWORD***)(a2 + 72);
	v3 = *(unsigned __int16*)(a1 + 60);
	if (v3 > 0x1B05)
	{
		v16 = v3 - 6920;
		if (v16)
		{
			if (v16 == 1)
			{
				if (*v2)
				{
					for (i = (_QWORD*)**v2; i; i = (_QWORD*)*i)
					{
						v18 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
						if (v18)
						{
							v19 = *(_QWORD*)(a1 + 64);
							v20 = *(_QWORD*)(a1 + 72);
							if (v19 == v20)
							{
							LABEL_40:
								sub_140854240(v18, *(_DWORD*)(a1 + 92), 0i64);
							}
							else
							{
								while (*(_DWORD*)(v18 + 24) != *(_DWORD*)v19
									|| ((*(_BYTE*)(v18 + 91) & 2) != 0) != *(_BYTE*)(v19 + 4))
								{
									v19 += 8i64;
									if (v19 == v20)
										goto LABEL_40;
								}
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
						}
					}
				}
			}
		}
		else
		{
			sub_140876240(a1, (_QWORD**)qword_140C61BA0);
			v21 = qword_140C61BA0;
			LODWORD(v22) = 0;
			v23 = *(__int64***)(qword_140C61BA0 + 56);
			if (v23)
			{
				do
				{
				LABEL_49:
					sub_140876240(a1, (_QWORD**)*v23[2]);
					v23 = (__int64**)*v23;
				} while (v23);
				while (1)
				{
					v22 = (unsigned int)(v22 + 1);
					if ((unsigned int)v22 >= 0xC1)
						break;
					v23 = *(__int64***)(v21 + 8 * v22 + 56);
					if (v23)
						goto LABEL_49;
				}
			}
			else
			{
				while (1)
				{
					v22 = (unsigned int)(v22 + 1);
					if ((unsigned int)v22 >= 0xC1)
						break;
					v23 = *(__int64***)(qword_140C61BA0 + 8 * v22 + 56);
					if (v23)
						goto LABEL_49;
				}
			}
		}
	}
	else if (v3 == 6917)
	{
		if (*v2)
		{
			for (j = (_QWORD*)**v2; j; j = (_QWORD*)*j)
			{
				v14 = sub_140830EE0(qword_140C61BA8, (__int64)(j + 1));
				v15 = v14;
				if (v14)
				{
					sub_140854240(v14, *(_DWORD*)(a1 + 92), (__int64)v2);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
				}
			}
		}
	}
	else if (*(unsigned __int16*)(a1 + 60) >= 0x1A02u)
	{
		if (*(unsigned __int16*)(a1 + 60) <= 0x1A03u)
		{
			v10 = sub_140855940(a1);
			v11 = v10;
			if (v10)
			{
				if (*(_BYTE*)(a1 + 88))
					v12 = *(_DWORD*)(a1 + 92);
				else
					v12 = 0;
				LOBYTE(v25) = 0;
				sub_140851A80(v10, v12, *(_DWORD*)(a1 + 92), (__int64)v2, v25);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
			}
		}
		else if (*(unsigned __int16*)(a1 + 60) > 0x1B01u)
		{
			if (*(unsigned __int16*)(a1 + 60) <= 0x1B03u)
			{
				v8 = sub_140855940(a1);
				v9 = v8;
				if (v8)
				{
					sub_140854240(v8, *(_DWORD*)(a1 + 92), (__int64)v2);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				}
			}
			else if (v3 == 6916)
			{
				sub_1408762F0(a1, (_QWORD**)qword_140C61BA0);
				v5 = qword_140C61BA0;
				LODWORD(v6) = 0;
				v7 = *(__int64***)(qword_140C61BA0 + 56);
				if (v7)
				{
					do
					{
					LABEL_13:
						sub_1408762F0(a1, (_QWORD**)*v7[2]);
						v7 = (__int64**)*v7;
					} while (v7);
					while (1)
					{
						v6 = (unsigned int)(v6 + 1);
						if ((unsigned int)v6 >= 0xC1)
							break;
						v7 = *(__int64***)(v5 + 8 * v6 + 56);
						if (v7)
							goto LABEL_13;
					}
				}
				else
				{
					while (1)
					{
						v6 = (unsigned int)(v6 + 1);
						if ((unsigned int)v6 >= 0xC1)
							break;
						v7 = *(__int64***)(qword_140C61BA0 + 8 * v6 + 56);
						if (v7)
							goto LABEL_13;
					}
				}
			}
		}
	}
	return 1i64;
}
// 140875FFA: conditional instruction was optimized away because rdi.8==0
// 140876039: conditional instruction was optimized away because rdi.8==0
// 1408761DD: conditional instruction was optimized away because rdi.8==0
// 140876219: conditional instruction was optimized away because rdi.8==0
// 14087609C: variable 'v25' is possibly undefined
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

