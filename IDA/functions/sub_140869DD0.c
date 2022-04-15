//----- (0000000140869DD0) ----------------------------------------------------
__int64 __fastcall sub_140869DD0(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
	return result;
}

