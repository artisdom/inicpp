#include "section.h"

namespace inicpp
{
	section::section(const section &source)
	{
		throw not_implemented_exception();
	}

	section &section::operator=(const section &source)
	{
		throw not_implemented_exception();
	}

	section::section(section &&source)
	{
		throw not_implemented_exception();
	}

	section &section::operator=(section &&source)
	{
		throw not_implemented_exception();
	}

	section::section(const std::string &name)
	{
		throw not_implemented_exception();
	}

	const std::string &section::get_name() const
	{
		return name_;
	}

	void section::add_option(const option &opt)
	{
		throw not_implemented_exception();
	}

	void section::remove_option(const std::string &option_name)
	{
		throw not_implemented_exception();
	}

	size_t section::size()
	{
		throw not_implemented_exception();
	}

	option &section::operator[](size_t index)
	{
		throw not_implemented_exception();
	}

	option &section::operator[](const std::string &option_name)
	{
		throw not_implemented_exception();
	}

	bool section::validate(const section_schema &sect_schema, schema_mode mode)
	{
		throw not_implemented_exception();
	}

	section::iterator section::begin()
	{
		throw not_implemented_exception();
	}
	
	section::iterator section::end()
	{
		throw not_implemented_exception();
	}
	
	section::const_iterator section::cbegin() const
	{
		throw not_implemented_exception();
	}
	
	section::const_iterator section::cend() const
	{
		throw not_implemented_exception();
	}

	std::ostream &operator<<(std::ostream &os, const section &sect)
	{
		throw not_implemented_exception();
	}
}