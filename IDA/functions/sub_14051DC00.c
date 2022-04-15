//----- (000000014051DC00) ----------------------------------------------------
void __fastcall sub_14051DC00(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // [rsp+30h] [rbp-18h] BYREF
	unsigned __int64 v6; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v3)
		{
			v4 = *(unsigned int*)(a1 + 24);
			if ((unsigned int)v4 >= 8 || !*(_DWORD*)(v3 + 4 * v4 + 188))
			{
				v6 = 0i64;
				v5 = 0i64;
				v5 = *(_QWORD*)(a1 + 16);
				v6 = __PAIR64__(*(_DWORD*)(a1 + 28), v4);
				sub_1403F4900(qword_140C65898, 0x85Cu, (__int64)&v5);
				sub_1400D4040(*(_QWORD*)(a1 + 8), "RuneSlotRerolled", *(char**)(a1 + 8), "ii", v6, HIDWORD(v6));
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

