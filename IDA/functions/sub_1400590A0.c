//----- (00000001400590A0) ----------------------------------------------------
__int64 __fastcall sub_1400590A0(__int64 a1, int a2)
{
	__int64* v3; // rax
	__int64 result; // rax

	v3 = (__int64*)sub_1400580E0(a1, a2);
	result = sub_14005BA70(a1, *v3, *(_QWORD*)(a1 + 16) - 16i64);
	if ((_DWORD)result)
		*(_QWORD*)(a1 + 16) += 16i64;
	else
		*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}

