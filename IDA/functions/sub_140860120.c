//----- (0000000140860120) ----------------------------------------------------
__int64 __fastcall sub_140860120(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a2 + 136);
	if (v2 == *(_QWORD*)(a2 + 144))
		return 1i64;
	do
	{
		result = sub_1408382F0(
			qword_140C61BB0,
			a1,
			*(_DWORD*)v2,
			*(_DWORD*)(v2 + 4),
			*(_DWORD*)(v2 + 8),
			*(_DWORD*)(v2 + 28),
			*(int**)(v2 + 16),
			*(_DWORD*)(v2 + 24),
			*(_QWORD*)(a1 + 176),
			4);
		if ((_DWORD)result != 1)
			break;
		v2 += 32i64;
	} while (v2 != *(_QWORD*)(a2 + 144));
	return result;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

