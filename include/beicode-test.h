#pragma once

#include <stddef.h>
#include <system_error>

#if !defined(BEICODE_EXPORT)
#define BEICODE_EXPORT
#endif

namespace beicode
{
	BEICODE_EXPORT
	void test_proc(const char* s) { printf("beicode::test = %s\n",s); }

	//BEICODE_EXPORT
	//Utf8CodeUnitKind utf8_code_unit_kind(unsigned char code_unit) noexcept;
}
