//----- (000000014071CC10) ----------------------------------------------------
__int64 __fastcall sub_14071CC10(__int64 a1, float a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 224);
	if (v3)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
	*(float*)(a1 + 332) = a2;
	return result;
}

