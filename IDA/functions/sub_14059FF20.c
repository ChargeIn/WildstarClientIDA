//----- (000000014059FF20) ----------------------------------------------------
void __fastcall sub_14059FF20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rax
	float v6; // xmm1_4
	float v7; // xmm0_4
	_QWORD* v8; // rdi
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]

	if (dword_140C7DF8C)
	{
		v6 = *(float*)&dword_140C7DF88;
	}
	else
	{
		dword_140C7DF8C = 1;
		v5 = sub_140200220(0x4E9u);
		if (v5)
		{
			v6 = *(float*)(v5 + 28);
			dword_140C7DF88 = LODWORD(v6);
		}
		else
		{
			v6 = 0.0;
			dword_140C7DF88 = 0;
		}
	}
	v7 = (float)(int)*(_QWORD*)(a3 + 144) * v6;
	if ((int)v7)
	{
		v8 = *(_QWORD**)(a1 + 16);
		v14 = 1i64;
		v15 = 0i64;
		v9 = (_QWORD*)sub_140059170(v8, 0x18ui64);
		*v9 = (unsigned int)(int)v7;
		v9[1] = 1i64;
		v9[2] = v15;
		v10 = v8[4];
		v11 = sub_140062650((__int64)v8, (unsigned __int64*)"Game.Money", 0xAui64);
		v12 = v8[2];
		v13 = v11;
		LODWORD(v14) = 4;
		sub_14005E8E0((__int64)v8, v10 + 160, (int*)&v13, v12);
		v8[2] += 16i64;
		sub_140058BF0((__int64)v8, -2);
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
}
// 140C7DF88: using guessed type int dword_140C7DF88;
// 140C7DF8C: using guessed type int dword_140C7DF8C;

