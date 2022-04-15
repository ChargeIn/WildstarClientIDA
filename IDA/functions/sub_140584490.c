//----- (0000000140584490) ----------------------------------------------------
void __fastcall sub_140584490(__int64 a1, int a2, __int128* a3, _WORD* a4, __int64 a5, __int64 a6, __int64 a7, int a8)
{
	int v8; // ebx
	__int64 v11; // rax
	__int128 v13; // xmm0
	__int128 v14; // xmm1
	__int128 v15; // xmm0
	int v16; // edi
	int v17; // edi
	bool v18; // zf
	int v19[4]; // [rsp+40h] [rbp-B8h] BYREF
	_WORD* v20; // [rsp+50h] [rbp-A8h]
	__int64 v21; // [rsp+58h] [rbp-A0h]
	__int64 v22; // [rsp+60h] [rbp-98h]
	__int64 v23; // [rsp+68h] [rbp-90h]
	__int128 v24; // [rsp+70h] [rbp-88h]
	__int128 v25; // [rsp+80h] [rbp-78h]
	__int128 v26; // [rsp+90h] [rbp-68h]
	int v27; // [rsp+A0h] [rbp-58h]

	v8 = 0;
	v11 = 0i64;
	if (*a4)
	{
		do
			++v11;
		while (a4[v11]);
		if (v11)
		{
			sub_1407E4830(v19, 0i64, 0x68ui64);
			v13 = *a3;
			v14 = a3[1];
			v19[2] = a2;
			v20 = a4;
			v21 = a5;
			v24 = v13;
			v25 = v14;
			v15 = a3[2];
			v22 = a6;
			v23 = a7;
			v27 = a8;
			v26 = v15;
			v16 = a2 - 1;
			if (v16)
			{
				v17 = v16 - 2;
				if (v17)
				{
					if (v17 != 4)
					{
					LABEL_12:
						v19[0] = v8;
						sub_1403F4900(qword_140C65898, 0x481u, (__int64)v19);
						return;
					}
					v18 = *(_DWORD*)(qword_140C65898 + 26180) == 84;
				}
				else
				{
					v18 = *(_DWORD*)(qword_140C65898 + 26180) == 71;
				}
			}
			else
			{
				v18 = *(_DWORD*)(qword_140C65898 + 26180) == 70;
			}
			if (v18)
				v8 = *(_DWORD*)(qword_140C65898 + 26176);
			goto LABEL_12;
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", 0i64, a4, 0, 3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

