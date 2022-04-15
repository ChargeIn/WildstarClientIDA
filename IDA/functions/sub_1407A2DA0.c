//----- (00000001407A2DA0) ----------------------------------------------------
float __fastcall sub_1407A2DA0(__int64 a1, unsigned __int64 a2)
{
	if ((int)sub_1407A4700(a1) < 0 || !a2)
		return 0.0;
	if (a2 < *(_QWORD*)(a1 + 32) - 1i64)
		return *(float*)(*(_QWORD*)(a1 + 40) + 24i64 * *(_QWORD*)(112 * a2 + *(_QWORD*)(a1 + 24) + 96));
	return *(float*)(a1 + 16);
}

