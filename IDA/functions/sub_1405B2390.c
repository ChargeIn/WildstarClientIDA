//----- (00000001405B2390) ----------------------------------------------------
void __fastcall sub_1405B2390(__int64 a1, int a2)
{
	__int64* v2; // r8
	__int64 v4; // rdi
	__int64* v5; // rbx
	__int64 v6; // rbx
	unsigned int v7; // eax
	__int64 v8; // [rsp+40h] [rbp-18h] BYREF
	__int64 v9; // [rsp+48h] [rbp-10h]

	v2 = *(__int64**)(a1 + 80);
	if (v2)
	{
		v8 = 0i64;
		v9 = 0i64;
		v8 = *v2;
		v9 = v2[1];
		sub_1403F4740(qword_140C65898, 0x52Fu, (__int64)&v8);
		v4 = qword_140C63628;
		v5 = *(__int64**)(qword_140C63628 + 720);
		if (v5)
		{
			if (*(_QWORD*)(qword_140C63628 + 744))
			{
				v6 = *v5;
				v7 = sub_1400518A0(qword_140C63628, 138 - (unsigned int)(a2 != 0), 1, 0);
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v6 + 16))(
					*(_QWORD*)(v4 + 720),
					v7,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
			}
		}
	}
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;

