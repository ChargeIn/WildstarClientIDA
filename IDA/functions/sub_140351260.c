//----- (0000000140351260) ----------------------------------------------------
__int64 __fastcall sub_140351260(__int64 a1)
{
	unsigned __int64 i; // rdi
	__int64 v3; // rax
	__int64 v4; // rbx

	for (i = 0i64; i < *(_QWORD*)(a1 + 8); ++i)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * i);
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(v3 + 8);
				sub_1400035C0((_QWORD*)(*(_QWORD*)(v3 + 32) + 848i64), 0i64);
				v3 = v4;
			} while (v4);
		}
	}
	return 1i64;
}

