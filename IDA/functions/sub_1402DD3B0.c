//----- (00000001402DD3B0) ----------------------------------------------------
int* __fastcall sub_1402DD3B0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int* result; // rax

	if (a2)
	{
		*(_QWORD*)(a1 + 1936) = *a2;
		*(_QWORD*)(a1 + 1944) = a2[1];
		*(_QWORD*)(a1 + 1952) = a2[2];
		*(_QWORD*)(a1 + 1960) = a2[3];
		*(_QWORD*)(a1 + 1968) = a2[4];
		*(_QWORD*)(a1 + 1976) = a2[5];
		*(_QWORD*)(a1 + 1984) = a2[6];
		*(_QWORD*)(a1 + 1992) = a2[7];
		*(_QWORD*)(a1 + 2000) = a2[8];
		*(_QWORD*)(a1 + 2008) = a2[9];
		*(_QWORD*)(a1 + 2016) = a2[10];
		result = (int*)a2[11];
		*(_QWORD*)(a1 + 2032) = a3;
		*(_QWORD*)(a1 + 2024) = result;
	}
	else
	{
		result = sub_1407E4830((int*)(a1 + 1936), 0i64, 0x60ui64);
		*(_QWORD*)(a1 + 2032) = 0i64;
	}
	return result;
}

