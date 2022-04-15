#include "../winhttp.h"

//----- (00000001404B8280) ----------------------------------------------------
void __fastcall sub_1404B8280(__int64 a1, unsigned int a2, int a3)
{
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ecx
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	int v14; // [rsp+20h] [rbp-A8h] BYREF
	__int64 v15; // [rsp+28h] [rbp-A0h] BYREF
	int* v16; // [rsp+30h] [rbp-98h]
	int* v17; // [rsp+38h] [rbp-90h]
	int v18; // [rsp+40h] [rbp-88h] BYREF
	__int64 v19; // [rsp+48h] [rbp-80h]
	int v20; // [rsp+50h] [rbp-78h] BYREF
	int v21; // [rsp+58h] [rbp-70h]
	__int64 v22; // [rsp+98h] [rbp-30h]
	int v24; // [rsp+E8h] [rbp+20h] BYREF

	v6 = sub_1405B1510(&qword_140C7DFB0);
	if (v6)
	{
		v7 = sub_1404C9B90(v5, a2);
		v8 = v7;
		if (v7)
		{
			if (!*(_DWORD*)(v7 + 644) || !*(_DWORD*)(v7 + 648))
			{
				sub_1403CC530(qword_140C65898, 0x67u);
				return;
			}
			v9 = *(_QWORD*)(v6 + 232);
			if (!v9 || !*(_DWORD*)(v6 + 272))
				v9 = 0i64;
			v10 = *(_DWORD*)(v9 + 184);
			if ((v10 & 0xFFFFFFFA) == 0 && v10 != 4)
			{
				v18 = 0;
				v19 = 0i64;
				v16 = 0i64;
				v17 = 0i64;
				sub_1407E4830(&v20, 0i64, 0x58ui64);
				v15 = 0x100000001i64;
				v11 = sub_140203DA0(*(_DWORD*)(v8 + 96));
				if (v11)
				{
					v13 = *(_DWORD*)(v11 + 8);
					if (v13 == 12)
					{
						v21 = 4;
					}
					else
					{
						if (v13 != 22)
							return;
						v21 = 6;
					}
					sub_1404B89A0(v12, (__int64)&v18, v8, (_QWORD*)(v6 + 8));
					v22 = 0i64;
					v16 = &v18;
					v24 = 0;
					v17 = &v24;
					if (a3)
					{
						sub_1404BC7E0((__int64*)(a1 + 680), &v18, 1i64);
						v14 = 0;
						sub_140003460((__int64*)(a1 + 760), &v14);
					}
					else
					{
						sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)&v15);
					}
				}
			}
		}
	}
}
// 1404B82BB: variable 'v5' is possibly undefined
// 1404B8397: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

