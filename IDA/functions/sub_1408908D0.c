//----- (00000001408908D0) ----------------------------------------------------
__int64 __fastcall sub_1408908D0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_BYTE*)(a1 + 297) = (*(unsigned __int8(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 176i64))(*(_QWORD*)(a2 + 8)) == 0;
	*(_QWORD*)(a1 + 264) = *(_QWORD*)a2;
	result = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 272) = result;
	*(_BYTE*)(a1 + 298) = 0;
	return result;
}

