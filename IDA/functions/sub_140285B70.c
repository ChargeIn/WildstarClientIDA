//----- (0000000140285B70) ----------------------------------------------------
__int64 __fastcall sub_140285B70(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 224);
	if (*(float*)(*(_QWORD*)(v1 + 48) + 12i64) == 0.0)
		return 0i64;
	else
		return *(unsigned int*)(*(_QWORD*)(v1 + 24) + 52i64);
}

