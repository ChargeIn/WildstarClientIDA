//----- (00000001405DF0E0) ----------------------------------------------------
void __fastcall sub_1405DF0E0(__int64 a1, int a2, int a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h]
	int v11; // [rsp+48h] [rbp+10h] BYREF

	v11 = a2;
	if ((unsigned int)sub_1405DF7C0(a1))
	{
		v5 = (*(__int64(__fastcall**)(int*))(a1 + 544))(&v11);
		v6 = *(_QWORD**)(*(_QWORD*)(a1 + 536) + 8 * (v5 % *(_QWORD*)(a1 + 528)));
		if (v6)
		{
			while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 552))(&v11, v6 + 2))
			{
				v6 = (_QWORD*)v6[1];
				if (!v6)
					return;
			}
			if (v6 != (_QWORD*)-24i64)
			{
				v7 = v6[3];
				v9 = 0i64;
				v10 = 0i64;
				v8 = *(_QWORD*)(v7 + 8);
				LODWORD(v10) = a3;
				v9 = v8;
				sub_1400161D0(qword_140C635F0, 0x3A1u, (__int64)&v9);
			}
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

