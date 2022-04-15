//----- (0000000140584360) ----------------------------------------------------
void __fastcall sub_140584360(__int64 a1, int a2, _WORD* a3, __int64 a4, __int64 a5, __int64 a6)
{
	int v6; // ebx
	__int64 v7; // rax
	int v11; // edi
	int v12; // edi
	bool v13; // zf
	int v14[4]; // [rsp+40h] [rbp-A8h] BYREF
	_WORD* v15; // [rsp+50h] [rbp-98h]
	__int64 v16; // [rsp+58h] [rbp-90h]
	__int64 v17; // [rsp+60h] [rbp-88h]
	__int64 v18; // [rsp+68h] [rbp-80h]

	v6 = 0;
	v7 = 0i64;
	if (*a3)
	{
		do
			++v7;
		while (a3[v7]);
		if (v7)
		{
			sub_1407E4830(v14, 0i64, 0x68ui64);
			v14[2] = a2;
			v16 = a4;
			v17 = a5;
			v18 = a6;
			v15 = a3;
			v11 = a2 - 1;
			if (v11)
			{
				v12 = v11 - 2;
				if (v12)
				{
					if (v12 != 4)
					{
					LABEL_12:
						v14[0] = v6;
						sub_1403F4900(qword_140C65898, 0x481u, (__int64)v14);
						return;
					}
					v13 = *(_DWORD*)(qword_140C65898 + 26180) == 84;
				}
				else
				{
					v13 = *(_DWORD*)(qword_140C65898 + 26180) == 71;
				}
			}
			else
			{
				v13 = *(_DWORD*)(qword_140C65898 + 26180) == 70;
			}
			if (v13)
				v6 = *(_DWORD*)(qword_140C65898 + 26176);
			goto LABEL_12;
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", 0i64, a3, 0, 3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

