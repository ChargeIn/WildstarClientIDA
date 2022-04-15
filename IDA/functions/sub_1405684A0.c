//----- (00000001405684A0) ----------------------------------------------------
__int64 __fastcall sub_1405684A0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax

	result = sub_140237AC0(a2);
	if (result)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 112) + 304i64) = *(_DWORD*)result;
		*(_DWORD*)(*(_QWORD*)(a1 + 112) + 308i64) = *(_DWORD*)(result + 4);
		result = *(unsigned int*)(result + 8);
		*(_DWORD*)(*(_QWORD*)(a1 + 112) + 312i64) = result;
	}
	return result;
}

