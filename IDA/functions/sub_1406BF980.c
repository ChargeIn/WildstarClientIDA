//----- (00000001406BF980) ----------------------------------------------------
__int64 __fastcall sub_1406BF980(__int64 a1, int* a2)
{
	__int64 result; // rax
	unsigned int v5; // edi
	__int64* v6; // rcx

	result = sub_1400D23B0(a1, a2);
	v5 = result;
	if ((_DWORD)result)
	{
		if (*(char*)(a1 + 28) < 0)
		{
			v6 = *(__int64**)(a1 + 680);
			if (v6)
				sub_1400C5810(v6);
			(*(void(__fastcall**)(__int64, void*, __int64, _QWORD, int))(*(_QWORD*)a1 + 120i64))(
				a1,
				&unk_1409F7224,
				6i64,
				(unsigned int)*a2,
				a2[1]);
		}
		return v5;
	}
	return result;
}

