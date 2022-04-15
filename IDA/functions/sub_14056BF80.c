//----- (000000014056BF80) ----------------------------------------------------
__int64 __fastcall sub_14056BF80(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	*(_DWORD*)(a1 + 24) = result;
	return result;
}

