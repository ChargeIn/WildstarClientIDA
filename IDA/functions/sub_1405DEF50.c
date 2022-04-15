//----- (00000001405DEF50) ----------------------------------------------------
void __fastcall sub_1405DEF50(__int64 a1, int a2)
{
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 v5; // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF
	__int64 v7; // [rsp+40h] [rbp+18h] BYREF

	v6 = a2;
	if ((unsigned int)sub_1405DF7C0(a1))
	{
		v3 = (*(__int64(__fastcall**)(int*))(a1 + 384))(&v6);
		v4 = *(_QWORD**)(*(_QWORD*)(a1 + 376) + 8 * (v3 % *(_QWORD*)(a1 + 368)));
		if (v4)
		{
			while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 392))(&v6, v4 + 2))
			{
				v4 = (_QWORD*)v4[1];
				if (!v4)
					return;
			}
			if (v4 != (_QWORD*)-24i64)
			{
				v5 = v4[3];
				v7 = 0i64;
				v7 = *(_QWORD*)(v5 + 24);
				sub_1400161D0(qword_140C635F0, 0x3AFu, (__int64)&v7);
			}
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

