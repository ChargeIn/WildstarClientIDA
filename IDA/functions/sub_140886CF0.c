//----- (0000000140886CF0) ----------------------------------------------------
__int64 __fastcall sub_140886CF0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 200);
	if (v1)
		return **(_QWORD**)(v1 + 8) + *(unsigned int*)(*(_QWORD*)(v1 + 8) + 24i64);
	if (*(_DWORD*)(a1 + 168) > (unsigned int)*(unsigned __int8*)(a1 + 192))
	{
		v1 = *(_QWORD*)(a1 + 184);
		return **(_QWORD**)(v1 + 8) + *(unsigned int*)(*(_QWORD*)(v1 + 8) + 24i64);
	}
	return *(_QWORD*)(a1 + 128);
}

