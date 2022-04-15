//----- (0000000140100EC0) ----------------------------------------------------
__int64 __fastcall sub_140100EC0(__int64 a1, __int64 a2)
{
	__int64* v2; // rax
	__int64 v5; // rcx

	v2 = *(__int64**)(a1 + 64);
	if (v2 == *(__int64**)(a1 + 72))
	{
		sub_140109F90((__int64*)(a1 + 48), v2, a2);
	}
	else
	{
		if (v2)
			sub_1400FEB20(*(_QWORD*)(a1 + 64), a2);
		*(_QWORD*)(a1 + 64) += 304i64;
	}
	v5 = *(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56);
	*(float*)(a1 + 112) = *(float*)(a2 + 60) + *(float*)(a1 + 112);
	return (unsigned int)((int)v5 / 304 - 1);
}

