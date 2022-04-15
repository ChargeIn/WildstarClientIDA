//----- (00000001403336D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403336D0(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // rbx
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 176))
		return 0i64;
	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
	if (!v2)
		return 0i64;
	QueryPerformanceCounter(&PerformanceCount);
	return (unsigned __int64)(1000 * (PerformanceCount.QuadPart - *(_QWORD*)(v2 + 768) - ::PerformanceCount.QuadPart))
		/ Frequency.QuadPart;
}

